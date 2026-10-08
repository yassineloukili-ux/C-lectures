#include <stdio.h>
#include <stdint.h>

/* Why do we need functions (and not just main)?

1) A piece of code that needs to be repeated many times
without much modification of the variables

Two good practices:

-a function should be viewed entirely at one glance
-it is good to divide the problem into pieces and re-piece it together

The function declaration contains three key pieces of information:

The name
The parameters
The type

Ex:

int power(int m, int n); 

*/

int power(int base, int n){ //Let's day 2^3

    int i = 1;
    int pow = 1;

    while(i <= n){ //While i <= 3
        pow = pow*base; // 1 * 2 -> 2 (next one will be 2 * 2 and will do this operation three times)
        i++;  
    }

    return pow;
}

unsigned int factorial(unsigned int n){

    unsigned int n_minus_1_factorial, return_value;

    if(n == 0){

        return_value = 1;
        return return_value;
    }

    n_minus_1_factorial = factorial(n - 1);
    return_value = n*n_minus_1_factorial;
    return return_value;
}

unsigned int simple_factorial(unsigned int n){

    if (n == 0){
        return 1; //0 factorial is 1
    }

    return n * factorial(n-1); //This basically increments down until is finds n == 0 and then multiplies all of the integers is went through

}



int main(void){
    int i = 0;
    while (i < 10){
        printf("%d %d %d\n", i, power (2,i), power(-3, i)); //This prints 3 different numbers that come from the function power
    i++;   
    }
}

/*Tracing Recursive Calls

simple_factorial(3);

Factorial #1

n = 3

Factorial #2

n = 2

Factorial #3

n = 1

Factorial #4

n = 0

Finally returns 1! Goes back to the others after and does 1 x 1 x 2 x 3 

*/