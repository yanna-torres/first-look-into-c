#include <stdio.h>

int main()
{
    char operator;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    if (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/')
    {
        printf("Invalid operator. Please use +, -, *, or /.\n");
        return 1;
    }
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
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
        if (num2 == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        result = num1 / num2;
        break;
    }
    printf("Result: %.2lf\n", result);

    return 0;
}