#include <stdio.h>
#include <math.h>

int main(void) {
    int num1, num2;
    float num3;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%i", &num2);

    printf("Digite o numero real: ");
    scanf("%f", &num3);

    // a) Produto do dobro do primeiro com metade do segundo
    float resultadoA = (2 * num1) * (num2 / 2.0);

    // b) Soma do triplo do primeiro com o terceiro
    float resultadoB = (3 * num1) + num3;

    // c) Terceiro elevado ao cubo
    float resultadoC = pow(num3, 3);

    printf("\nResultado A: %.2f", resultadoA);
    printf("\nResultado B: %.2f", resultadoB);
    printf("\nResultado C: %.2f\n", resultadoC);

    return 0;
}