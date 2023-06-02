
int ispolnitel(int num) {
    int first = num / 100; // первая цифра
    int second = (num / 10) % 10; // вторая цифра
    int third = num % 10; // третья цифра
    int newNum = (first * second) * 100 + (second * third); // новое число
    return newNum;
}