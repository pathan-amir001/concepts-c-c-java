#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&operator);

    printf("Enter first numbers: ");
    scanf("%d",&num1);

    printf("Enter Second numbers: ");
    scanf("%d",&num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1; // Exit program with an error code
            }
            break;
        default:
            printf ("Error: Invalid operator\n");
            return 1; // Exit program with an error code
    }

    printf("Result: %d\n", result);

    return 0; // Exit program successfully
}
