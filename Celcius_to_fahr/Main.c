#include <stdio.h>

double fahr(double celcius) {
	return celcius * 1.8 + 32;
}

int main() {
	double celcius, fahrenheit;

	scanf_s("%lf", &celcius);
	fahrenheit = fahr(celcius);

	printf("%lf degrees celcius ~ %.2lf degrees fahrenheit", celcius, fahrenheit);

	return 0;
}