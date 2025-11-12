#include <stdio.h>

// 遞迴解法：將 n 個圓盤從 from 移到 to，使用 temp 作為輔助柱
void hanoi(int n, char from, char to, char temp) {
    if (n == 1) {
        printf("移動圓盤 1 從 %c 到 %c\n", from, to);
        return;
    }

    // 將 n-1 個圓盤從 from 移到 temp
    hanoi(n - 1, from, temp, to);

    // 將最大圓盤從 from 移到 to
    printf("移動圓盤 %d 從 %c 到 %c\n", n, from, to);

    // 將 n-1 個圓盤從 temp 移到 to
    hanoi(n - 1, temp, to, from);
}

int main() {
    int n;
    printf("輸入圓盤數量: ");
    scanf("%d", &n);

    printf("\n河內塔移動步驟如下：\n");
    hanoi(n, 'A', 'C', 'B'); // A=起始柱, C=目標柱, B=輔助柱
    return 0;
}