
#include <stdio.h>

void print_function( char letter );
int ctr;

int main( void )
{
    char star = '*';
    char dash = '-';
    for (ctr = 0 ; ctr < 10; ctr++ )
    {
        print_function( star );
        print_function( dash );
        printf("\n");
    }
    return 0;
}

void print_function ( char letter )
{
    for (int ctr = 0; ctr < 9; ctr++) 


    {
        printf("%c", letter);
    }
}

/* Door een int toe te voegen aan de onderste functie krijgt
elke character een interger en daardoor worden er meerdere geprint*/