#include <stdio.h>
#include <stdlib.h>
#include "no.h"

/**
 * Cria nó
 * @param  i valor do nó
 * @return erro ou nó
 */
t_apont_no createNo(int i)
{
    t_apont_no aux;
    aux = (t_apont_no)malloc(sizeof(t_no));

    if (!aux) {
        printf("\nErro na alocacao.\n");
        return;
    }

    aux->info = i;
    aux->prox = NULL;
    return aux;
}
