#include <stdio.h>

int main() {

    /*
      VARIABLES
      Used to store data.
    */
    int age = 20;          // integer variable
    float marks = 85.5;    // decimal value
    char grade = 'A';      // single character

    printf("Age: %d\n", age);
    printf("Marks: %.1f\n", marks);
    printf("Grade: %c\n\n", grade);

    /*
      CONSTANT
      Value that should not change.
    */
    const int maxStudents = 100;
    printf("Max Students: %d\n\n", maxStudents);

    /*
      ARITHMETIC OPERATORS
      +  -  *  /  %
    */
    int a = 10, b = 3;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n\n", a % b);

    /*
      RELATIONAL OPERATORS
      Result is TRUE (1) or FALSE (0)
    */
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a == b : %d\n\n", a == b);

    /*
      LOGICAL OPERATORS
      Used to combine conditions
    */
    int x = 1, y = 0;

    printf("x && y : %d\n", x && y);  // AND
    printf("x || y : %d\n", x || y);  // OR
    printf("!x     : %d\n", !x);      // NOT

    return 0;
}

