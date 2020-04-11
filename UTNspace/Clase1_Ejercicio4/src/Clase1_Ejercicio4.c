/*
 ============================================================================
 Name        : Clase1_Ejercicio4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int contadorPositivos = 0;
	int contadorNegativos = 0;
	int numero;
	int i=0;

	for(i=0;i<10;i++){

		printf("Ingrese un numero: \n");
		scanf("%d",&numero);

				if(numero>=0){
					contadorPositivos++;
				}
				else (contadorNegativos++);
	}

	printf("La cantidad de negativos es : %d\n", contadorNegativos);
	printf("La cantidad de positivos es : %d\n", contadorPositivos);

	return 0;
}
