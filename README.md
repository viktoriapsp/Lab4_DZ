# Домашнее задание к работе 4

## Условие задачи
<img width="974" height="84" alt="image" src="https://github.com/user-attachments/assets/2d82f7f4-4129-4242-aba2-970baa217742" />
Банк отправляет клиенту секретный код для подтверждения операции. Код будет сгенерирован, если только одна из сумм (A или B) в последних двух операциях была четной. Запишите условие генерации кода.

## Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Объявление переменных A, B, condition.
3. Ввести значения переменных A и B.
4. Вычислить condition = ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0))
5. Вывести значение переменной condition.
6. Конец.

### Блок-схема
<img width="262" height="592" alt="д" src="https://github.com/user-attachments/assets/02a662f1-a4b6-4d97-9f49-18870a2ef313" />

[Открыть блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22RAkUimXS5p7Ly3xP5HHX%22%3E7Vhbb9owFP4tfUAqD0i5kEAeC6XttHXqxKQ9G2ISr06cOabAfv18JQkJl1JAVJqEHPuc4%2BPjL98xJ265w2T5SEEWP5MQ4pZjhcuWe99yHNtyLf4QkpWSeH5fCSKKQm1UCMboLzQztXSOQphXDBkhmKGsKpySNIVTVpEBSsmiajYjuLpqBiJYE4ynANelv1DIYiXtO71C%2FgRRFJuVbT9QmgQYY72TPAYhWZRE7qjlDikhTPWS5RBiAZ7BRc172KJdB0Zhyg6ZEHz%2F%2BXUSPKYRu6foCXkvePmj01VeYFhDoXCrRTmZ0ync4cvYsZUBT7gd6yGhLCYRSQEeFdIBJfM0hCJCi48Km2%2BEZFxoc%2BFvyNhKEwPMGeGimCVYazUlAI0g2xGbq%2BzeAJ7r2NZvgFMXkgQyuuIGFGLA0FsVDKA5FK3tCph5RyP9DtR3gFwCD2NOcgHSIkYMjjMg0V%2FwPKtCwImVwS9pzhOlAkp5sxze4F62lmjvekU%2FGMh2pCdByuCyFFMdo7jE974m96LIDdsQXntxu3qsTwDfOhOq%2Fgm57F4xl72r4rJ7CJclRXmXWwGMISYRBQnfcQYp4mFAuql7KRTvp%2F8MLaH5K9meDrIdqHYkW34YWncth%2BNgmTnvywa%2FIRv8jWxwqtngWOdKB%2FMaTpIP3hXng0H0ShLCOyQh9nC6YUM%2BZiJhKKw48v%2FMRf0wmJGUdWYgQZjzinOYQ%2BKDRHjVBkOQT0GIAFc9k5RsquWalvSSy9chfASZVK0X4b1IP2UweQbSZllDhFOCCVV%2BsciYTgjo6y2NJreO56mkc2zTaatnVVvqtNuNgfEiMEQMERGBWhwr9cNFQg36qu931dPaEqYJYEKN5HZPqB%2FYgQzb9lVEtmU6Qbc5tn2RHAGapdEwoJTerdvTKJY6W0BTpPaEjX67YnXhteC6amtDcZqX5t6sZ14a3Pa1givw6Q3Fr0bN%2FxTcQsGbowlYJu9npODWk%2FCYBblY%2FqkZ6RFlV1Avu5yNssvpVcsu1z5b2XXKT%2Br13cFV1l3OVdVdBqtP%2BSVit%2FqDxu%2BRvXm5pWazJmD6GkkqdEqpyyhIc4OQMNtI69pBWdSFH60udxRrFzzud1STB0LWUM2pzaaTPNv1h3mZD8pu72wnm3NIgp382upOX08VV1ievMLyj0K06cLK20TUqyDqHYEoHxY3u1JXuh93R%2F8A%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы
Программа написана на языке C
```c
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
```
## Результат работы программы
```
== ГЕНЕРАЦИЯ СЕКРЕТНОГО КОДА ==
Введите две суммы А и В: 2 5
Код сгенерирован (1 - да, 0 - нет): 1
```
## Информация о разработчике
```
Имя: Страхова Виктория Викторовна
Группа: бИЦТ-261
Вариант: 27
