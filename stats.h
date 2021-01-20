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
 * This file declares all the user-defined functions to be used in
 * stats.c.
 * @author Seokjin Go
 * @date 20 Jan 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints out the statistics on the input array.
 *
 * Once the input array is given, it first prints out the original array 
 * as well as a sorted vesion in descending order. Then based on the sorted
 * version, it prints out the statistics: median, mean, maximum and minimum
 * value of the array.
 * @param array: input array
 *
 * @return This function does not return any value.
 */
void  print_statistics(unsigned char *array, int length);

/**
 * @brief Prints out the input array.
 *
 * A simple function which prints out the input array.
 *
 * @param array The input array.
 * @param length Length of the input array.
 *
 * @return This function does not return any value.
 */
void  print_array(unsigned char *array, int length);

/**
 * @brief Returns the median value of the input array.
 *
 * This function assumes the input array is already sorted in
 * either descending/ascending order. Hence it simple returns
 * the element of median indexs
 *
 * @param array The input array.
 * @param length Length of the input array.
 * 
 * @return This function returns the median value of the input array.
 */
unsigned char   find_median(unsigned char *array, int length);

/**
 * @brief Returns the mean value of the input array.
 *
 * Using a for loop, it simply accumulates all the value of 
 * the input array elements. Then it returns the sum divided by
 * the length of array; the mean value.
 *
 * @param array The input array.
 * @param length Length of the input array.
 *
 * @return The mean value of the input array.
 */
unsigned char   find_mean(unsigned char *array);

/**
 * @brief Returns the maximum value of the input array.
 *
 * This function assumes the input array is already sorted in
 * descending order. Hence it simple returns
 * the element of median index [0].
 *
 * @param array The input array.
 *
 * @return Returns the first element of the array.
 */
unsigned char   find_maximum(unsigned char *array);

/**
 * @brief Returns the maximum value of the input array.
 *
 * This function assumes the input array is already sorted in
 * descending order. Hence it simple returns
 * the element of index [length].
 *
 * @param array The input array.
 *
 * @return Returns the last element of the array.
 */
unsigned char   find_minimum(unsigned char *array);
void  sort_array(unsigned char *array, int length);

#endif /* __STATS_H__ */

