#include <stdio.h>

int main() {
    int a, b, result;
    char op;
    char again = 'y';  // Initialize to 'y' so we enter the loop at least once

    while (again == 'y' || again == 'Y') {
        // Take input from user
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);

        // Ask for operation
        printf("Choose operation (+ - *): ");
        scanf(" %c", &op);  // Space before %c skips newline

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

        // Ask if user wants to do another calculation
        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &again);
    }

    printf("Goodbye!\n");
    return 0;
}
