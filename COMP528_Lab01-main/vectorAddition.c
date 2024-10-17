#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void){
	
	const int ARRSIZE = 100000;

	int arr1[ARRSIZE], arr2[ARRSIZE];

	int i;

	srand(time(NULL)); //Initialise random seed. Seed will be based on time.

	for(i = 0; i < ARRSIZE; i++){
		arr1[i] = rand() % 100; //assign arr1 with random values between 0-99
		//TASK: Initialise arr2 with random variables
		arr2[i] = rand() % 100;
	}

	//Print Array1 Values

	printf("Array1: ");
	printArray(arr1, ARRSIZE);

	//TASK: Print Array2 Values
	printf("Array2: ");
	printArray(arr2, ARRSIZE);

	int sumArray[ARRSIZE];

	for (i = 0; i < ARRSIZE; i++) {
		sumArray[i] = arr1[i] + arr2[i];
	}

	printf("Sum array: ");
	printArray(sumArray, ARRSIZE);

	/*
	TASK: Declare a new array, add each array together element by element.
 	      Print the new array when done.
	*/

}

//Function for printing the array
int printArray(int array[], int ARRSIZE){
	int i;
	for(i = 0; i < ARRSIZE; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
} 


