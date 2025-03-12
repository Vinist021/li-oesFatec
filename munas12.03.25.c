/*
	Processa lista linear de numeros por ENCADEAMENTO.
	Versao do arquivo 63_ED-Listas-lineares.pdf
*/
#include <stdio.h>
#include <stdlib.h>

struct regLista
{
    int valor;
    struct regLista *prox;

};
typedef struct regLista TItem;

int main(void)
{
    int numero;
	TItem *inicio, *aux, *ant;
	int qtde, soma;
	float media;

	/* inicializando a variável inicio com um endereco vazio */
	inicio = NULL;
	while (1)
	{
	    printf("Informe o numero:\n");
		scanf("%d", &numero);

		if (numero < 0)
			break;

		/* criando uma variável struct regLista dinamicamente */
		aux = (TItem *) malloc(sizeof(TItem));

		/* preenchendo os campos da variável criada dinamicamente */
		aux->valor = numero;
		aux->prox = NULL;

		/* fazendo o encadeamento do novo item na lista */
		if (inicio == NULL)
			inicio = aux;
		else
			ant->prox = aux;

		ant = aux;
	}

	/* imprimindo os valores da lista */
	if (inicio == NULL)
		printf("\n\n\nLista vazia\n");
	else
	{
	    printf("\n\n\nConteudo da lista:\n");

		qtde = 0;
		soma = 0;
		aux = inicio;
		while (aux != NULL)
		{
		    printf("%d\n", aux->valor);
			qtde = qtde + 1;
			soma = soma + aux->valor;

			aux = aux->prox;
		}
		media = soma / (float)qtde;
		printf("Soma dos valores: %d Media dos valores: %.2f\n",
				soma, media);
	}
	printf("\n");

	while (1)
	{
	    printf("Informe o numero para ser exluido:\n");
		scanf("%d", &numero);

		if (numero < 0)
			break;

		aux = inicio;
		ant = NULL;
		while (aux != NULL && aux->valor != numero)
		{
		    ant = aux;
			aux = aux->prox;
		}

		if (aux == NULL)
			puts("Valor nao encontrado na lista");
		else
		{
		    if (ant == NULL)
				inicio = aux->prox;
			else
				ant->prox = aux->prox;

			free(aux);
		}

		/* imprimindo os valores da lista */
		if (inicio == NULL)
			printf("\n\n\nLista vazia\n");
		else
		{	printf("\n\n\nNOVO conteudo da lista:\n");

			qtde = 0;
			soma = 0;
			aux = inicio;
			while (aux != NULL)
			{
			    printf("%d\n", aux->valor);
				qtde = qtde + 1;
				soma = soma + aux->valor;

				aux = aux->prox;
			}
			media = soma / (float)qtde;
			printf("Soma dos valores: %d Media dos valores: %.2f\n",
					soma, media);
		}
		printf("\n");
	}

	return 0;
}
