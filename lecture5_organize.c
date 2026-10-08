#include <stdio.h>
#include <stdint.h>
/* #include "power.h" -> An example of how it would look like if we had a power.h header file independent 

let's say power.h looks like this:

int power(int m, int n);

*/

// If the complexity of the code grows, it is good to seperate the good into modules

/* First, a header file (.h): It is the file that contains the declarations (not the definitions, meaning)
it does not define what the function does, it only declares it.

Second, a source file (.c): This is the file that contains the source code (aka the definitions)*/

int power(int m, int n){

    if (n == 0){
        return 1;

    }

    return n*power(m, n-1); //This is a recursive function
} 

int main(){

    int i = 0;
    while (i < 10){
        printf("%d %d %d\n", i, power (2,i), power(-3, i)); //This prints 3 different numbers that come from the function power
    i++;    
    }

}



