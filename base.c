#include <stdio.h>			// Para la I/O
#include <stdlib.h>			// Para System() y Aleatorios
#include <time.h>			// PAra time()

#define SIZE 15

void imprimeArreglo(int arr[])
{
	int i;
	for(i = 0; i < SIZE; ++i)
		printf("%d, ", arr[i]);
	printf("\n\n");
}

//  Escriba su función de Ordenamiento aquí.

int main() 
{
	int arreglo[SIZE], i;

	srand( time(0) );		// Pregunta la hora y genera la semilla

	for(i = 0; i < SIZE; ++i)
		arreglo[i] = rand() % 1000;
	imprimeArreglo(arreglo);

	// invocar el algoritmo de ordenamiento
	
	imprimeArreglo(arreglo);

	system("pause");
	return 0;
}
