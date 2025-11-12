#include <stdio.h>

// 遞迴函式：計算 base^exponent
long long power(int base, int exponent) {
    if (exponent == 1)          // 終止條件
        return base;
    else                        // 遞迴步驟
        return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    printf("輸入底數 (base): ");
    scanf("%d", &base);
    printf("輸入指數 (exponent): ");
    scanf("%d", &exponent);

    printf("%d 的 %d 次方 = %lld\n", base, exponent, power(base, exponent));
    return 0;
}