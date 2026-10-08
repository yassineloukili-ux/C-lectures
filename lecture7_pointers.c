#include <stdint.h>
#include <stdio.h> 

/* Pointers! 

Before understanding pointers, we need to understand references

A reference is a value that provides indirect access to an object

Example: variable r stores a reference to variable to variable x

We can dereference r and get the value 

Why use references?

It is more efficient if we have a large object! 

We can use 8 bits instead of 2 million. 

We can construct linked data structures also, where we 
cross reference different data structures 

Pointers are the most primitive type of reference 
They store memory addresses 

*Memory can be viewed as a collection of numbered cells where
each cell holds an 8 bit "byte" just another word for 8 bit

Example:

0x1000 -> 0x5
0x1004
0x1008
etc

That top line means

*/

int x = 5; 

/* A variable is actually a symbolic name for a group of cells

Now, how do we declare a pointer? let's see:

type *name; 

int *p; 

This is not a variable of type int. This is actually a pointer, 
which is a specific type already, but that points to the CONCEPT
of integers or points to the TYPE INTEGER!

*/

/* The address OF operator:

It is used to evaluate to the adress of that it operates on

example:

p = &x; 

makes p = address of x AKA pointer to x

a pointer always has an address anyways*/

/* The Dereferencing Operator (*) 

y = *p; 

This assigns 5 to y 

*/