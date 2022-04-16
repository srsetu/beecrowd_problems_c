#include <stdio.h>

int main()
{
	char name[20];
	float salary, sell;
	scanf("%s %f %f", &name, &salary, &sell);

	float salaryWithBonus = salary + ((15 * sell) / 100);

	printf("TOTAL = R$ %.2f\n", salaryWithBonus);
	return 0;
}