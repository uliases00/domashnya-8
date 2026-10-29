#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	int N, i;
	double p = 1.0;

	printf("Введите N:\n");
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		p = p * (i / 10.0 + 1.0);
	}
	printf("Произведение = %.6f\n", p);

	return 0;
}