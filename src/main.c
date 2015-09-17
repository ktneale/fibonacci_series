/*
 * Written by Kevin Neale (C) 2015.
 *
 * Computes the nth value of a Fibonacci Series.
 */
#include <stdio.h>
#include <stdlib.h>


//Recursive_solution.
int fibonacci_r(int n)
{
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return (fibonacci_r(n - 1) + fibonacci_r(n - 2));
    }
}


//Iterative_solution.
int fibonacci_i(int n)
{
    int x = 0, y = 1, z = 0, i = 0, tmp = 0;

    for (i = 0; i < n; i++) {
        z = x + y;

        tmp = x;
        x = x + y;
        y = tmp;
    }

    return z;
}


int main()
{
    int result = 0;

    int n = 3;

    //Calculate using the recursive implementation.
    printf("Calculated using the recursive implementation: \n");
    result = fibonacci_r(n);
    printf("Fibonacci_r result for (%d): %d\n", n, result);

    n = 4;
    result = fibonacci_r(n);
    printf("Fibonacci_r result for (%d): %d\n", n, result);

    n = 8;
    result = fibonacci_r(n);
    printf("Fibonacci_r result for (%d): %d\n", n, result);

    n = 20;
    result = fibonacci_r(n);
    printf("Fibonacci_r result for (%d): %d\n", n, result);


    //Calculate using the iterative implementation.
    printf("Calculated using the iterative implementation: \n");
    n = 3;
    result = fibonacci_i(n);
    printf("Fibonacci_i result for (%d): %d\n", n, result);

    n = 4;
    result = fibonacci_i(n);
    printf("Fibonacci_i result for (%d): %d\n", n, result);

    n = 8;
    result = fibonacci_i(n);
    printf("Fibonacci_i result for (%d): %d\n", n, result);

    n = 20;
    result = fibonacci_i(n);
    printf("Fibonacci_i result for (%d): %d\n", n, result);

    return 0;
}
