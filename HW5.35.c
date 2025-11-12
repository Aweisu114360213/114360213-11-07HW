#include <stdio.h>

unsigned long long fibonacci(unsigned int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    unsigned long long a = 0, b = 1, next;
    for (unsigned int i = 2; i <= n; i++) {
        next = a + b;   // 當前數 = 前兩數的和
        a = b;
        b = next;
    }
    return b;
}

int main() {
    unsigned int n;
    printf("輸入 n 以計算第 n 個費波那契數: ");
    scanf("%u", &n);

    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
    return 0;
}