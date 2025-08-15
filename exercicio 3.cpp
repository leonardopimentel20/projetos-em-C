//Construa um algoritmo que peça a temperatura em graus Fahrenheit (ºF), transforme e mostre na tela a temperatura em graus Celsius (ºC)

#include <stdio.h>
#include <math.h>


int main (void){
	
	float fah, cel;
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%ff",&fah);
	fflush(stdin);
	cel = (fah - 32) * 5 / 9;
	printf("Entao em Celsius sera :%.2f c", cel);
	

	
	return 0;
	
}