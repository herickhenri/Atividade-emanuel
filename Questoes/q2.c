#include <stdio.h>

int main()
{
    float tempGrauFahrenheit = 0;
    float tempGrauC = 0;
    
    
    printf("Escreva a temperatura em graus Fahrenheit:");
    scanf("%f", &tempGrauFahrenheit);
    
    tempGrauC = ((tempGrauFahrenheit - 32) * 5 / 9);
    
    printf("Temperatura em graus Celcius: %f\n", tempGrauC);

    return 0;
}