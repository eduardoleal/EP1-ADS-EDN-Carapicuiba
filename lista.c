#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/**
 * Inicia uma lista
 * @param l elemento do tipo t_lista
 */
void initList(t_lista *l)
{
    l->prim = NULL;
    l->ult  = NULL;
}

/**
 * Verifica se a lista está vazia
 * @param  l elemento do tipo t_lista
 * @return bool
 */
int isEmptyList(t_lista *l)
{
    return l->prim == NULL;
}

/**
 * Insere elemento na lista
 * @param l elemento do tipo lista
 */
void insertList(t_lista *l)
{
    t_apont_no novo, aux;
    novo = createNo(1);
    aux  = l->prim;

    if (! novo) {
        printf("\nErro ao alocar.\n");
        return;        
    }

    if (isEmptyList(l)) {
        l->prim = novo;
        l->ult  = novo;
        return;
    }
    
    while (aux->prox) aux = aux->prox;

    aux->prox = novo;
    l->ult    = novo;
}

/**
 * Remove item da lista
 * @param l elemento do tipo t_lista
 */
void removeList(t_lista *l)
{
    t_apont_no aux;

    if (! isEmptyList(l)) {
        aux     = l->prim;
        l->prim = aux->prox;
        free(aux);
    }
}

/**
 * Conta quantos parametros há na lista
 * @param  l elemento do tipo t_lista
 * @return int números de elementos
 */
int countLista(t_lista *l)
{
    t_apont_no aux;
    int cont = 0;
    aux      = l->prim;

    while (aux){
        cont = cont + aux->info;
        aux  = aux->prox;
    }

    return cont;
}


/**
 * Cria números aleatóriamente
 * @param l elemento do tipo t_lista
 * @param n número de interações
 */
void createTest(t_lista *l, int n)
{
    int i, v[n];

    for (i = 0; i <= n; i++) v[i] = rand() % 2;

    for (i = 0; i < n; i++) printf("%d", v[i]);

    printf("\n");

    for (i = 0; i < n; i++) if (v[i] == 1) {
        insertList(l);
    } else {
        if (! isEmptyList(l)) removeList(l);
    }
}
