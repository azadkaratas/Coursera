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

}

void print_array(unsigned char *arr, unsigned int size){

}


unsigned int find_median(unsigned char *arr, unsigned int size){

}

double find_mean(unsigned char *arr, unsigned int size){

}

unsigned int find_maximum(unsigned char *arr, unsigned int size){

}

unsigned int find_minimum(unsigned char *arr, unsigned int size){

}

void sort_array(unsigned char *arr, unsigned int size){

}

