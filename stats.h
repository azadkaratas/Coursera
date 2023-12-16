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
 * @file stats.h
 * @brief Header file for stats.c
 *
 * @author Azad Karatas
 * @date 09.12.2023
 *
 */

#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints statistics of the array
 *
 * Includes minimum, maximum, mean and median information
 *
 * @param arr Pointer to the data array
 * @param size Size of the array
 *
 * @return None
 */
void print_statistics(unsigned char *arr, unsigned int size);


/**
 * @brief Prints elements of the array
 *
 * @param arr Pointer to the data array
 * @param size Size of the array
 *
 * @return None
 */
void print_array(unsigned char *arr, unsigned int size);


/**
 * @brief Finds the median of the array
 *
 * @param arr Pointer to the data array
 * @param size Size of the array
 *
 * @return Median value of the array
 */
unsigned int find_median(unsigned char *arr, unsigned int size);


/**
 * @brief Finds the mean value of the array
 *
 * @param arr Pointer to the data array
 * @param size Size of the array
 *
 * @return Mean value of the array
 */
double find_mean(unsigned char *arr, unsigned int size);


/**
 * @brief Finds the maximum of the array
 *
 * @param arr Pointer to the data array
 * @param size Size of the array
 *
 * @return Maximum value of the array
 */
unsigned int find_maximum(unsigned char *arr, unsigned int size);


/**
 * @brief Finds the minimum of the array
 *
 * @param arr Pointer to the data array
 * @param size Size of the array
 *
 * @return Minimum value of the array
 */
unsigned int find_minimum(unsigned char *arr, unsigned int size);


/**
 * @brief Sorts array
 * 
 * This function sorts and changes the input array.
 * Zeroth element is the largest value in the sorted array.
 *
 * @param arr Pointer to the data array
 * @param size Size of the array
 *
 * @return None
 */
void sort_array(unsigned char *arr, unsigned int size);


#endif /* __STATS_H__ */

