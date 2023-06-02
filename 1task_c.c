#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int x = (a + c - 1) / c * c;
    while (x <= b && x % d != c) {
        x += c;
    }
    printf("%d ", x);

    while ((x += c) <= b) {
        printf("%d ", x * (x % d == c));
    }

    return 0;
}