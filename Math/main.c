/*
*   Demo of basic Math functions in C.
*   Function are:
*   add
*   multiply
*   subtract
*   divide
*
*   These functions are NOT error proof and were coded quick to be used as examples
*
*   Author: Levi Butcher
*   Date Written: 9/25/18
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int checkResult(int result, int expectedResult);


int main()
{
    int a = 50;
    int b = 40;
    int expectedAdd = 90;
    int expectedSubtract = 10;
    int expectedMultiply = 2000;
    int expectedDivide = 1;

    printf("Basic Math functions\n");
    printf("Written by: Levi Butcher\n");

    printf("\nAdding a: %d and b: %d\n", a, b);
    int addResult = add(a, b);
    printf("Expected Result: %d\n", expectedAdd);
    printf("Results: %d\n", addResult);
    printf("Were results expected: %d\n", checkResult(expectedAdd, addResult));

    printf("\nSubtracting a: %d and b: %d\n", a, b);
    int subtractResult = subtract(a, b);
    printf("Expected Result: %d\n", expectedSubtract);
    printf("Results: %d\n", subtractResult);
    printf("Were results expected: %d\n", checkResult(expectedSubtract, subtractResult));

    printf("\nMultiply a: %d and b: %d\n", a, b);
    int multiplyResult = multiply(a, b);
    printf("Expected Result: %d\n", expectedMultiply);
    printf("Results: %d\n", multiplyResult);
    printf("Were results expected: %d\n", checkResult(expectedMultiply, multiplyResult));

    printf("\nDivide a: %d and b: %d\n", a, b);
    int divideResult = divide(a, b);
    printf("Expected Result: %d\n", expectedDivide);
    printf("Results: %d\n", divideResult);
    printf("Were results expected: %d\n", checkResult(expectedDivide, divideResult));


    return 0;
}

/*
*   Returns the result of adding a + b
*/
int add(int a, int b)
{
    return a + b;
}

/*
*   Returns the result of subtracting a - b
*/
int subtract(int a, int b)
{
    return a - b;
}

/*
*   Returns the result of multiply a * b
*/
int multiply(int a, int b)
{
    return a * b;
}

/*
*   Returns the result of divide a / b
*
*   if b is 0 -> results will be 0
*/
int divide(int a, int b)
{
    if(b == 0){
        return 0;
    }
    return a / b;
}

/*
*   Returns a 0 if result and expectedResult is the same value
*   PreCondition: result and expectedResult are any whole number
*   PostCondition: return value will be 0 or any whole number
*/
int checkResult(int result, int expectedResult)
{
    return result - expectedResult;
}
