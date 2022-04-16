#include <stdio.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double calc = ((a * 2) + (b * 3) + (c * 5)) / 10;
	printf("MEDIA = %0.1f\n", calc);
	return 0;
}