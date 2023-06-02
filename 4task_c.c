#include <stdio.h>

int sumDigits(int *num) {
    int sum = 0;
    int n = *num; // сохраняем значение числа в отдельной переменной
    while (n != 0) {
        int digit = n % 10; // получаем очередную цифру числа
        sum += digit; // добавляем ее к сумме
        n /= 10; // переходим к следующей цифре
    }
    return sum; // возвращаем сумму цифр числа
}

int main() {
    int num = 12345;
    printf("Сумма цифр числа %d: %d\n", num, sumDigits(&num));
    return 0;
}