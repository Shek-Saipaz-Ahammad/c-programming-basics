#include <stdio.h>

int main() {

    printf("=== Chapter 3: Conditionals in C ===\n\n");

    /*
      IF STATEMENT
      Executes code if condition is TRUE
    */
    int age = 18;
    if(age >= 18) {
        printf("You are eligible to vote.\n\n");
    }

    /*
      IF-ELSE STATEMENT
      Executes one block if TRUE, another if FALSE
    */
    int marks = 75;
    if(marks >= 50) {
        printf("You passed the exam.\n\n");
    } else {
        printf("You failed the exam.\n\n");
    }

    /*
      ELSE IF LADDER
      Check multiple conditions in order
    */
    int score = 85;
    if(score >= 90) {
        printf("Grade: A\n\n");
    } else if(score >= 75) {
        printf("Grade: B\n\n");
    } else if(score >= 50) {
        printf("Grade: C\n\n");
    } else {
        printf("Grade: F\n\n");
    }

    /*
      TERNARY OPERATOR
      Short form of if-else
      condition ? value_if_true : value_if_false
    */
    int number = 10;
    printf("Number is %s\n\n", (number % 2 == 0) ? "Even" : "Odd");

    /*
      SWITCH STATEMENT
      Used when multiple specific values to check
    */
    int day = 3;
    switch(day) {
        case 1:
            printf("Monday\n\n");
            break;
        case 2:
            printf("Tuesday\n\n");
            break;
        case 3:
            printf("Wednesday\n\n");
            break;
        case 4:
            printf("Thursday\n\n");
            break;
        case 5:
            printf("Friday\n\n");
            break;
        default:
            printf("Weekend\n\n");
    }

    return 0;
}
