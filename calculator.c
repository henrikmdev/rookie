#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    // Take input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Ask for operation
    printf("Choose operation (+ - *): ");
    scanf(" %c", &op);  // Space before %c skips any leftover newline

    // Perform the chosen operation
    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid operation.\n");
            break;
    }

    return 0;
}
