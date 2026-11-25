// week1-2.c
// Kopie van opdracht 2, maar zonder main().

#include <stdio.h>
#include "week1-2.h"

// Print 9 keer het teken dat je meegeeft (bijvoorbeeld '*' of '-')

void print_function( char letter )
{
    for (int ctr = 0; ctr < 9; ctr++)
    {
        printf("%c", letter);
    }
}