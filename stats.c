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
 * @file stats.c
 * @brief This file includes bunch of statistical calculations.
 *
 * @author Azad Karatas
 * @date 09.12.2023
 *
 */

#include <stdio.h>
#include "stats.h"

#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  printf("Printing array:\n");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}

void print_statistics(unsigned char *arr, unsigned int size){
  
  printf("Printing statistics of the array: \n");
  
  printf("Median of the array: %d\n", find_median(arr, size));
  printf("Mean of the array: %f\n", find_mean(arr, size));
  printf("Maximum of the array: %d\n", find_maximum(arr, size));
  printf("Minimum of the array: %d\n", find_minimum(arr, size));
}

void print_array(unsigned char *arr, unsigned int size){
  unsigned int i = 0;
  while(i < size){
    printf("%d ", arr[i]); 
    i++;
  }
  printf("\n");
}


unsigned int find_median(unsigned char *arr, unsigned int size){
	// First sort the array
	sort_array(arr, size);
	
	// Then return the element at the middle
	return arr[size/2];
}

double find_mean(unsigned char *arr, unsigned int size){
  unsigned int i = 0;
  unsigned int sum = 0;
	
	// First calculate the sum value
  while(i < size){
	  sum += arr[i];
    i++;
  }
	
	// Then return the average
	return (double)sum/size;
}

unsigned int find_maximum(unsigned char *arr, unsigned int size){
	// First sort the array
	sort_array(arr, size);
	
	// Then return the first element
	return arr[0];
}

unsigned int find_minimum(unsigned char *arr, unsigned int size){
	// First sort the array
	sort_array(arr, size);
	
	// Then return the last element
	return arr[size-1];
}

void sort_array(unsigned char *arr, unsigned int size){
	// Sorting with basic BubbleSort
	int temp, i, j;
	for(i = 0; i < size; i++){
		for(j = 0; j < i; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

