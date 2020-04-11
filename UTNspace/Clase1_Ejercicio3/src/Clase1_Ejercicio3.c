/*
 ============================================================================
 Name        : Clase1_Ejercicio3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int a;
	int b;
	int resultado;

	printf("\nIngrese 1 numero: ");
	scanf("%d",&a);
	if(a==0){
		printf("\nIngrese un valor distinto de cero");
		scanf("%d",&a);
	}
	printf("\nIngrese 2 numero: ");
	scanf("%d",&b);
	if(b==0){
			printf("\nIngrese un valor distinto de cero");
			scanf("%d",&b);
	resultado=a-b;
	}

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	if(resultado<0){
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");


	return 0;
}
