#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


int main() {
	double a, v0, g = 9.81, h;

	scanf_s("%lf", &a);
	scanf_s("%lf", &v0);

	double a_rad = a / 180.0 * M_PI;

	h = (v0 * v0 * sin(a_rad) * sin(a_rad)) / (2 * g);

	printf("Maximum height reached by the object = %.3lfm", h);

	return 0;
}