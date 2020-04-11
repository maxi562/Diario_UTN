/*
 ============================================================================
 Name        : Clase2_Ejercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numero;
	int acumulador = 0;
	int maximo;
	int minimo;
	float promedio;
	int i;


	for(i=0;i<5;i++){

		printf("Indique un numero :\n");
		scanf("%d",&numero);

		if(i == 0 || numero > maximo){
			maximo = numero;

		}
		if(i == 0 || numero < minimo) {
			minimo = numero;
		}

		acumulador = acumulador + numero;
	}

		promedio = (float) acumulador / 5;


		printf("\nEl máximo es : %d",maximo);
		printf("\nEl mínimo es : %d",minimo);
		printf("\nEl promedio es : %f",promedio);


	return 0;
}
