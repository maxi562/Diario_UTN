/*
 * UTN.C
 *
 *  Created on: 11 abr. 2020
 *      Author: maximiliano
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


	int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
		int retorno = -1;
		int bufferInt;

		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
		{
			printf("%s",mensaje);
			scanf("%d",&bufferInt);

			do{
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;

			}
			else {
				printf("%s",mensajeError);
				reintentos--;
			}

			}while(reintentos>= 0);


		}

		return retorno;


}
	int utn_getChar(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos)
	{
		int retorno = -1;
		int bufferChar;

				if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
				{
					printf("%s",mensaje);
					void __fpurge();
					scanf("%s",&bufferChar);

					do{
					if(bufferChar >= minimo && bufferChar <= maximo)
					{
						*pResultado = bufferChar;
						retorno = 0;
						break;

					}
					else {
						printf("%s",mensajeError);
						reintentos--;
					}

					}while(reintentos>= 0);


				}

				return retorno;

	}

	int utn_getNumeroFloat(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos)
	{
		int retorno = -1;
		int bufferFloat;

			if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
				{
				printf("%s",mensaje);
				scanf("%f",&bufferFloat);

				do{
				if(bufferFloat >= minimo && bufferFloat <= maximo)
				{
					*pResultado = bufferFloat;
					retorno = 0;
					break;

				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}

					}while(reintentos>= 0);


				}

				return retorno;

	}













