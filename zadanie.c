#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int A, B;
    int condition;

    printf("=== ГЕНЕРАЦИЯ СЕКРЕТНОГО КОДА ===\n");
    printf("Введите две суммы A и B: ");
    scanf("%d %d", &A, &B);

    condition = ((A % 2 == 0 && B % 2 != 0) ||
                 (A % 2 != 0 && B % 2 == 0));

    printf("Код сгенерирован (1 - да, 0 - нет): %d\n", condition);
    return 0;
}