#include <stdio.h>
#include <float.h>

double add(double num1, double num2) {
        return num1 + num2;
}

double subtract(double num1, double num2) {
        return num1 - num2;
}

double multiply(double num1, double num2) {
        return num1 * num2;
}

double divide(double num1, double num2) {
        if (num2 == 0) {
                printf("Error: Cannot divide by zero");
                return NAN;
        } else {
                return num1 / num2;
        }
}

int main() {
        char operation, again;
        double num1, num2, result;

        do {
                printf("Enter an operation (+, -, *, /): ");
                scanf(" %c", &operation);
                printf("Enter two operands: ");
                scanf("%lf %lf", &num1, &num2);

                switch (operation) {
                        case '+':
                                result = add(num1, num2);
                                break;
                        case '-':
                                result = subtract(num1, num2);
                                break;
                        case '*':
                                result = multiply(num1, num2);
                                break;
                        case '/':
                                result = divide(num1, num2);
                                break;
                        default:
                                printf("Error: Invalid an operation");
                                continue;
                }

                printf("Result: %.2lf\n", result);
                printf("Would you like to perform another calculation? y/n: ");
                scanf("%s", &again);
        } while (again == 'y' | again == 'Y');
        return 0;
}
