 //Construa um algoritmo que peça uma temperatura em graus Celsius (ºC), transforme e mostre na tela a temperatura em graus Fahrenheit (ºF). 

#include <stdio.h>
#include <math.h>
int main() {

    float cel, fah;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &cel);
    fah = (cel * 9 / 5) + 32;
    printf("A temperatura em Fahrenheit e: %.2fF\n", fah);

    return 0;
}