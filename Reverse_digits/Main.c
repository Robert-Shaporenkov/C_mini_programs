#include <stdio.h>

void print_reverse(int x) {      // Function that reverses a 6-digit positive integer without loops
    int initial = x;
    int num1 = (x % 10) * 100000;
    x /= 10;
    int num2 = (x % 10) * 10000;
    x /= 10;
    int num3 = (x % 10) * 1000;
    x /= 10;
    int num4 = (x % 10) * 100;
    x /= 10;
    int num5 = (x % 10) * 10;
    x /= 10;
    int num6 = x;
    int res = num1 + num2 + num3 + num4 + num5 + num6;
    printf("The number %d reversed is %d", initial, res);
}

int main() {
    int num;
    scanf_s("%d", &num);
    print_reverse(num);
}