/*
 ============================================================================
 Name        : Clase3_Ejercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float retornarNumero();
float areaCirculo(float radio);

int main(void) {

	float auxiliarNumero;
	float auxiliarArea;

	auxiliarNumero = retornarNumero();

	auxiliarArea = areaCirculo(auxiliarNumero);

	printf("El área del círculo es : %.2f",auxiliarArea);

	return 0;
}


float retornarNumero(){
	float numero;
	printf("Ingrese numero: \n");
	scanf("%f",&numero);

	return numero;
}
float areaCirculo(float radio){

	float area;
	float PI = 3.141592;

	area = PI * radio * radio;
	return area;
}
