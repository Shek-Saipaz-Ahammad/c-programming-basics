#include <stdio.h>

int main() {

    // WHILE LOOP
    printf("While Loop:\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    printf("\n\n");

    // DO-WHILE LOOP
    printf("Do-While Loop:\n");
    int j = 1;
    do {
        printf("%d ", j);
        j++;
    } while (j <= 5);

    printf("\n\n");

    // FOR LOOP
    printf("For Loop:\n");
    for (int k = 1; k <= 5; k++) {
        printf("%d ", k);
    }

    printf("\n\n");

    // BREAK STATEMENT
    printf("Break Example:\n");
    for (int x = 1; x <= 10; x++) {
        if (x == 6) {
            break;
        }
        printf("%d ", x);
    }

    printf("\n\n");

    // CONTINUE STATEMENT
    printf("Continue Example:\n");
    for (int y = 1; y <= 5; y++) {
        if (y == 3) {
            continue;
        }
        printf("%d ", y);
    }

    return 0;
}
