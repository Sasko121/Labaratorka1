#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "math.h"


// lab01
/*
* x^a*x / e^-a*x
*/

int main()
{
    float a, b, x;

    // Запитуємо користувача ввести значення для a, b та x
    printf(" a: ");
    if (scanf("%f", &a) != 1) {
        printf("Помилка введення для a.\n");
        return 1;
    }

    printf(" b: ");
    if (scanf("%f", &b) != 1) {
        printf("Помилка введення для b.\n");
        return 1;
    }

    printf(" x: ");
    if (scanf("%f", &x) != 1) {
        printf("Помилка введення для x.\n");
        return 1;
    }

    // Обчислюємо результат
    float result = pow(x, a * x) / exp(-a * x);

    // Виводимо результат
    printf("Result: %.2f\n", result);

    return 0;
}