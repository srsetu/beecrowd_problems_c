#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int result = ((a * b) - (c * d));

	printf("DIFERENCA = %d\n", result);
	return 0;
}