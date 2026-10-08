#include <stdarg.h> 
#include <stdio.h> 
#include <math.h> 

/* Structs 

Strcuts are a data type. 

A structure is a data type to include other data types
(remember the data types we have seen like ints/floats,etc) 

it consists of members called fields

Structures also have types. Why? 

Example 1: A date represented by 3 fields:

-Year
-Month
-Day

Example 2: A circle

-Radius (float)
-Center (x,y) aka another struct 

So we can put structs inside structs 

How to declare a struct:

struct tag {
    type member-name-1
    type member-name-2 
    
}; 

We have to put a semicolon at the end of the definition, like usual
Notice that brackets are used differently here

Concrete example:*/

struct coord {
    int x;
    int y;
    int z; 
}; 

// Example structure for a sphere in R^3 

/* A structure declaration does not allocate memory, it is only a tag 

We can then declare any integer to be an instance of x,y or z by doing:*/ 

struct coord variable_1; 
struct coord variable_2; 

// Notice that no value has been assigned to the variables yet
// We can assign values like this: 

struct coord variable_1 = {300}; 

/* Good. Now, what is "typedef" ? 

typedef can be used to make definitions easier with structures

Instead of always saying "struct coord", we can say "coord_t" after
we do this: "*/

typedef struct coord coord_t; 

/* Usually, typedef and structure declaration are combined to do: */

typedef struct new_coord{
    int y; 
    int x; 
    int z; 
} coord_t; // Notice, this is the name we gave to our coordinates member of our structure

// Then we can assign values like this

coord_t coord1, coord2;
coord_t coord1 = {2}; 
coord_t coord2 = {3}; // Always use curly brackets to assign

/* Some structure operation rules:

Members can be accessed individually
Structures can be copied and assigned to other structures
Structers can be passed as arguments to functions
Structures can be returned by functions
The address of a structure can be calculated (similar to pointers) 

Let's access members:

Example; if we want to move a coordinate by 20 units in x and 30 units in y*

coord3.x = coord3.x + 20; 
coord3.y += 20; 

easy! 

We can not use [] to access members

Some practice exercises with C Tutor:

Function that returns a structure
Rewriting a function with typedef
Function with a structure as input parameter

*/ 