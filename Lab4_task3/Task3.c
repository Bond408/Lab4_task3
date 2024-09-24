#include <stdio.h>
#include <locale.h>
void main()
{
	int task3(); {
		int N;
		setlocale(LC_ALL, "RUS");
		printf("Введите целое трехзначное число\n");
		scanf_s("%d", &N);
		printf("Последняя цифра числа N = %d\n", N % 10);
		printf("Первая цифра числа N = %d\n", N / 100);
		printf("Сумма цифр числа N = %d\n", N / 10 % 10 + N % 10 + N / 100);
	}
}
	