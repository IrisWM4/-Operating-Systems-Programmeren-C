// week1-4.c
// Berekent de omtrek van een cirkel met een pointer.


#include <stdio.h>

// De functie zet het antwoord in de variabele waar de pointer naar wijst.
void calculate(float diameter, float *omtrek_pointer)
{
    *omtrek_pointer = 3.14 * diameter;
}

int main()
{
    float diameter; // Maak een plekje in het geheugen voor een komma-getal de diameter
    float omtrek;   // Maak een plekje in het geheugen voor de omtrek
    float *pointer = &omtrek;   // Maak een pointer die het adres van omtrek onthoudt

    printf("Geef de diameter: ");
    scanf("%f", &diameter);

    calculate(diameter, pointer);

    printf("De omtrek is %f\n", omtrek);

    return 0;
}