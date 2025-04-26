#include <stdio.h>

int main()
{
    float tempGrauC = 0;
    float tempGrauFahrenheit = 0;
    
    
    printf("Escreva a temperatura em graus Celcius:");
    scanf("%f", &tempGrauC);
    
    tempGrauFahrenheit = tempGrauC * 9/5 + 32;
    
    printf("Temperatura em graus Fahrenheit: %f\n", tempGrauFahrenheit);

    return 0;
}