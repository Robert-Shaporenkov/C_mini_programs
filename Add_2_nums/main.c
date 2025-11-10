#include <stdio.h>

int main() {
	int num1;
	int num2;

	printf("Enter 1st num: ");
	scanf_s("%d", &num1);

	printf("Enter 2nd num: ");
	scanf_s("%d", &num2);

	printf("%d + %d = %d", num1, num2, num1 + num2);
	return 0;
}