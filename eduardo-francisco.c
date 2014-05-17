/**
 * EP1-ADS-EDN-Carapicuíba
 * @author Eduardo Leal <me@lealeduardo.com> 
 * @author Francisco Severo <jr_fsevero@hotmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
	t_lista l;
	int i, n;

	initList(&l);

	srand(time(0));

    printf("\n\n/*******************************\n\n");
    printf("    Formato da entrada:\n");
    printf("    2\n");
    printf("    nn\n");
    printf("    5\n");
    printf("    nnnnn\n");
    printf("\n\n    ATENÇÃO: Ao fim deste aviso o programa irá aguardar uma entrada númerica\n");
    printf("             Aperte 0 a qualquer momento para finalizar o programa \n");
    printf("\n*******************************/\n\n");

	for (i = 1; i != 0; i++) {
		scanf("%d", &n);

		if (n < 0 || n > 100) printf("\nValor inválido. Insira números entre 1 e 100.\n");
		else {
			if (n == 0) {
                printf("\nTotal de elementos na lista: %d\n\n", countLista(&l));
                return 0;
            }
            else createTest(&l, n);
        }
    }


	return 0;
}
