int main() {
    int n;
    scanf("%d", &n);

    int fib1 = 0, fib2 = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    if (n == 0) {
        printf("0");
    } else {
        printf("%d", fib);
    }

    return 0;
}