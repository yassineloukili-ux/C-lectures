#include <stdio.h>
#include <stdint.h>

/* Objective: Becoming familiar with arrays
-How they are stored in memeory
-Small programs with arrays
-Sorting elements in an array */

/* An array is a data structure consisting of a collection of elements
typically of the same type, each element has an index
(and integer) which determines the lofcation of the element

Also known as subscripts

First element is always 0 in programming languages.*/

/*Declaring an array

Element-type name[capacity]

Ex:

double samples[10];

*/

/*Initialization

An array initialization looks like this:

dounle samples[] = {19, 3 , 4, 5}; 

Question: What is the difference between declaration
and initialization?

*/

int factorials[5] = {1,2,6,24,120}; // Array with 5 elements, here named
int factorials_two[8] = {1, 2, 6, 24, 120}; //The rest of the elements are 0
int factorials_three[3] = {1,2,6,24,120}; // What happens?

/* C vs Python Arrays:

The C declaration looks like 

type name[capacity]; 

int numbers[10];

The C compiler can automatically calculate the capacity, based on the
number of values in the initializer list. 

But there is no way to increase capacity at run-time in C.*/

