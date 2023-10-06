#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Введіть перше число: ");
    scanf("%lf", &num1);

    printf("Введіть операцію (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Введіть друге число: ");
    scanf("%lf", &num2);

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
                printf("Помилка: Ділення на нуль неможливе.\n");
                return 1; // Повертаємо 1, щоб позначити помилку
            }
            break;
        default:
            printf("Помилка: Непідтримувана операція.\n");
            return 1; // Повертаємо 1, щоб позначити помилку
    }

    printf("Результат: %.2lf\n", result);

    return 0; // Повертаємо 0, щоб позначити успішне завершення програми
}
