#include <stdio.h>
#include <locale.h>
void main()
{
	int task3(); {
		int N;
		setlocale(LC_ALL, "RUS");
		printf("������� ����� ����������� �����\n");
		scanf_s("%d", &N);
		printf("��������� ����� ����� N = %d\n", N % 10);
		printf("������ ����� ����� N = %d\n", N / 100);
		printf("����� ���� ����� N = %d\n", N / 10 % 10 + N % 10 + N / 100);
	}
}
	