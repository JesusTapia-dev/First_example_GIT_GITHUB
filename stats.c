/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <Add File Name>
 * @brief
 *analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and   median of the data set
 *
 *
 * @author Jesus Tapia Gallardo
 * @date 25/03/2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
int main() {

   unsigned int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
	unsigned int *p;
	unsigned int mean, maximun, minimun,median;
	p=&test[0];
	print_array(p);
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

	mean=find_mean(p);
	maximun=find_maximun(p);
	minimun=find_minimun(p);
	median=find_median(p);
	print_statistics(mean,maximun,minimun,median);
	sort_array(SIZE,p);
	
	
}




 unsigned int print_array(unsigned int *p){
 	
 	for(int j=0;j<5;j++){
 			for(int i=0; i<8;i++){
			printf("%i \t",*p);
		p=p+1;
	}
 		printf("\n");
	 }
}

// Function to calculate the mean
unsigned int find_mean(unsigned int *p){
	unsigned int med=0,ant=0;
	for(int i=0;i<SIZE;i++){
		med=ant+*p;
		p=p+1;
		ant=med;
	}
	//printf(" Valor medio:%i",med/SIZE);
	return med/SIZE;
}
// Function to calculate the maximun of the array

unsigned int find_maximun(unsigned int *p){
	unsigned int maxi=*p;
	unsigned int *q;
	q=p;
	for(int i=0;i<SIZE;i++){
		if(maxi<*(p+i)) {
			maxi=*(p+i);
		}
	}
	//printf("\n Maximo:%i",maxi);
	return maxi;
}
// Function to calculate the minimun of the array


unsigned int find_minimun(unsigned int *p){
	unsigned int mini=*p;
	unsigned int *q;
	q=p;
	for(int i=0;i<SIZE;i++){
		if(mini>*(p+i)) {
			mini=*(p+i);
		}
	}
	//printf("\n Minimun:%i",mini);
	return mini;
}

//Functions that prints on the screen 

unsigned int print_statistics(unsigned int mean,unsigned int maximun, unsigned int minimun,unsigned int median){
	
	printf("The mean of the array is:%i \n",mean);
	printf("The maximun of the array is:%i \n",maximun);
	printf("The minimun of the array is:%i \n",minimun);
	printf("The median of the array is:%i \n",median);

}


void sort_array(int n, unsigned int* ptr)
{
	int i, j, t;

	// Sort the numbers using pointers
	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) >*(ptr + i)) {
				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}

	// print the array
	printf("Array sorted:\n");
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
	printf("\n");
}


unsigned int find_median(unsigned int *p){
	unsigned int median;
	if(SIZE%2==0) median=(*(p+SIZE/2-1)+*(p+SIZE/2))/2;
	else median=*(p+SIZE/2);
	return median;
}

