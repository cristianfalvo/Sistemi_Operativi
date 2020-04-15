/*
 * 004bubble_sort.c
 *
 *  Created on: 13 apr 2020
 *      Author: utente
 */

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int * array, int array_dimension);

void swap(int * a, int * b);

int main(int argc, char ** argv){
	int arr[] = {10, 1, -3, 4, 125, 55, -45, 3};
	int len = sizeof(arr)/sizeof(int);
	bubble_sort(arr, len);
	printf("Array ordinato: ");
	for (int i = 0; i< len; i++ ){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void bubble_sort(int * array, int array_dimension){

	if (array == NULL || array_dimension<0){
		printf("Gestione errore?\n");
	}

	int n = array_dimension, new_n;

	while (n>1){

		new_n = 0;

		for (int i = 1; i < n; i++){

			if (array[i-1] > array[i]){
				swap(&array[i-1], &array[i]);
				new_n = i;
			}
		}

		n = new_n;
	}
}

void swap(int * a, int * b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
