#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
    int y_dist = y1 - y2;
    int x_dist = x1 - x2;

    return sqrt(y_dist * y_dist + x_dist * x_dist);
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a = dist(x1, y1, x2, y2);
    float b = dist(x1, y1, x3, y3);
    float c = dist(x2, y2, x3, y3);

    float semi_p = (a + b + c) / 2.0;
    return sqrt((semi_p) * (semi_p - a) * (semi_p - b) * (semi_p - c));
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf_s("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    float res = area(x1, y1, x2, y2, x3, y3);
    printf("%.3f", res);
    return 0;
}