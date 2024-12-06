#include <stdio.h>
#include <float.h>

int main() {
        char op;
        double num1, num2, result;

        printf("Enter an operation (+, -, *, /): ");
        scanf("%c", &op);

        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);

        switch (op) {
                case '+':                                                          result = num1 + num2;
                        break;
                case '-':
                        result = num1 - num2;
                        break;
                case '*':
                        result = num1 * num2;
                        break;
                case '/':
                        result = num1 / num2;
                        break;
                default:
                        printf("Error: Invalid an operation");
                        result = DBL_MAX;
        }

        if (result != DBL_MAX)
                printf("Result: %.2lf\n", result);
        return 0;
}
