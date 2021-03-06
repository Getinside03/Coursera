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
 * @brief Prints out a simple statistics on a given input array.
 *
 * This program receives an input array with length of 40, then prints out
 * a simple statistics on it which includes: median, mean, maximum and minimum.
 *
 * @author Seokjin Go
 * @date 20 Jan 2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
  return;
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *array, int length){
  printf("array:\n");
  print_array(array, length);
  printf("array after sort:\n");
  sort_array(array, length);
  print_array(array, length);
  printf("median = %u\n", find_median(array, length));
  printf("mean = %u\n", find_mean(array));
  printf("maximum = %u\n", find_maximum(array));
  printf("minimum = %u\n", find_minimum(array));
}
void print_array(unsigned char *array, int length){
  int interval = length / 5;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < interval; j++){
      printf(" %u", array[i*interval + j]);
    }
    printf("\n");
  }
  printf("\n");
}
unsigned char find_median(unsigned char *array, int length){
  return array[length/2];
}
unsigned char find_mean(unsigned char *array){
  int sum = 0;
  for(int i = 0; i < SIZE; i++) sum+=array[i];
  return (unsigned char)(sum/(float)SIZE);
}
unsigned char find_maximum(unsigned char *array){
  return array[0];
}
unsigned char find_minimum(unsigned char *array){
  return array[SIZE-1];
}

/* Bubblesort the array in descending order */
void sort_array(unsigned char *array, int length){
  unsigned char tmp;

  for(int i = 0; i < length; i++){
    for(int j = 0; j < length - 1; j++){
      if(array[j] <= array[j+1]){
        tmp = array[j+1];
        array[j+1] = array[j];
        array[j] = tmp;
      }
    }
  }
}