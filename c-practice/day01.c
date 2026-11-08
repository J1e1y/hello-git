#include <stdio.h>

int main(void) {
    int n;

    printf("请输入一个整数: ");
    if (scanf("%d", &n) != 1) {
        printf("输入错误\n");
        return 1;
    }

    printf("%d 的平方是 %d\n", n, n * n);
    return 0;
}