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

    // �������� ����������� ������ �������� ��� a, b �� x
    printf(" a: ");
    if (scanf("%f", &a) != 1) {
        printf("������� �������� ��� a.\n");
        return 1;
    }

    printf(" b: ");
    if (scanf("%f", &b) != 1) {
        printf("������� �������� ��� b.\n");
        return 1;
    }

    printf(" x: ");
    if (scanf("%f", &x) != 1) {
        printf("������� �������� ��� x.\n");
        return 1;
    }

    // ���������� ���������
    float result = pow(x, a * x) / exp(-a * x);

    // �������� ���������
    printf("Result: %.2f\n", result);

    return 0;
}