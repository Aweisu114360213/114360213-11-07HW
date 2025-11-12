#include <stdio.h>
#include <stdlib.h>

char a;
int main(void) {
	printf("請輸入英文字母");
	scanf("%c",&a);
	if (a >= 65 && a <= 90) {
		printf("%c", (a+32));
	}
	else if (a >= 97 && a <= 122) {
		printf("%c", (a-32));
	}
	else{
		printf("輸入錯誤");
	}
	return 0;
}
