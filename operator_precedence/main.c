
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a = 5;
    int b = 2;
    char c = 'A'; // ASCII value of 'A' is 65
    float f = 6.5;

    // Example 1: Arithmetic operators (+, -, *, /) precedence
    int result1 = a + b * a; // Multiplication (*) has higher precedence than addition (+)
    printf("Result1: %d\n", result1); // Output will be 5 + (2*5) = 15

    // Example 2: Mixing data types (int and float)
    // This is an example of an implicit typecast. int a will be typecast to a float to allow
    // for the division (a/f)
    float result2 = a / f; // Integer divided by float results in float
    printf("Result2: %.2f\n", result2); // Output will be 0.769231 because 5/6.5 = 0.769230769230769

    // Example 3: Using parentheses to change precedence
    int result3 = (a + b) * a; // Parentheses changes the evaluation order
    printf("Result3: %d\n", result3); // Output will be (5 + 2) * 5 = 35

    // Example 4: Relational and equality operator precedence over logical operators
    int result4 = result1 > result3 && f < 10; // && has lower precedence than > and <
    printf("Result4: %d\n", result4); // Output will be 0 (false) because result1 > result3 is false

    // Example 5: Mixing char and int, and using cast to float
    float result5 = (float)(c + b) / a; // Cast has higher precedence, then addition, then division
    printf("Result5: %.2f\n", result5); // Output will be (float)(65 + 2) / 5 = 13.40

    return EXIT_SUCCESS;
}