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
 * @file <> 
 * @brief <Second branch on GIT >
 *
 * <Add Extended Description Here>
 *
 * @author <Jesus Tapia>
 * @date <27/03/2022 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here
All the functions are using pointers
 */ 

unsigned int print_array(unsigned int *p);
unsigned int find_mean(unsigned int *p);
unsigned int find_maximun(unsigned int *p);
unsigned int find_minimun(unsigned int *p);
unsigned int find_median(unsigned int *p);
unsigned int print_statistics(unsigned int mean,unsigned int maximun, unsigned int minimun,unsigned int median);// This function just use printf  
void sort_array(int n, unsigned int* ptr);



#endif /* __STATS_H__ */
