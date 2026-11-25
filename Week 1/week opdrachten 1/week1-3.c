// week1-3.c


#include <stdio.h>
#include "week1-2.h"

int main() {
    int myNum;

    while (1) {
        printf("Type een nummertje: \n");
        scanf("%d", &myNum);

        printf("Jouw nummer is: %d \n", myNum);

        if (myNum < 0) {
            printf("Getal is negatief, het programma stopt.\n");
            break;
        }
        else if (myNum == 1) {
            printf("Actie: print_function() uit opdracht 2 uitvoeren.\n");
            for (int ctr = 0; ctr < 10; ctr++) {
                print_function('*');
                print_function('-');
                printf("\n");
            }
        }
        else {
            // de eigen actie, twee keer een getal doen
            printf("Actie: het getal keer 2 doen.\n");
            printf("%d keer 2 is %d\n", myNum, myNum * 2);
        }
    }

    return 0;
}