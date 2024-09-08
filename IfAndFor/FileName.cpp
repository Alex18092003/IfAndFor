#include <iostream>
#include <locale.h>
#include <stdio.h>


using namespace std;

void One()
{
	printf("�� ����������� �����, ���������� ����� ������������ ��������, � ������� ��������� ������ �����\n");
	int x = 2;
	int y = -1;
	if (x > 0 && y > 0)
	{
		printf("����� ��������� � ������ ������������ ��������");
	}
	else if (x < 0 && y > 0)
	{
		printf("����� ��������� �� ������ ������������ ��������");
	}
	else if (x < 0 && y < 0)
	{
		printf("����� ��������� � ������ ������������ ��������");
	}
	else
	{
		printf("����� ��������� � ��������� ������������ ��������");
	}
}

void Two()
{
	printf("�������� ����������� (���������� ���������� �������������� ��������, �� ��������� ��������� ������������� �������� � ���� ���������).\n");
	printf("������� ������ �����: ");
	float one, two;
	int mark;
	scanf_s("%f", &one);
	printf("\n������� ������ �����: ");
	scanf_s("%f", &two);
	printf("\n�������� ��������: \n�������� - 1 \n��������� - 2 \n��������� - 3 \n������� - 4\n����� �������� = ");
	scanf_s("%d", &mark);
	if (mark == 1 || mark == 2 || mark == 3 || mark == 4)
	{
		float result;
		switch (mark)
		{
		case 1:
			result = one + two;
			printf("\n%f", result);
			break;
		case 2:
			result = one - two;
			printf("\n%f", result);
			break;
		case 3:
			result = one * two;
			printf("\n%f", result);
			break;
		default:
			result = one / two;
			printf("\n%f", result);
			break;
		}
	}
	else
	{
		printf("\n���! ����� �������� ���. ���������� ������������� � ������ �������");
	}
}

void Three()
{
	printf("�������� ��������� ������� y �� ���������� ������� (x �������� ������������� � ����������), ��������� ��������� ��������.\n");
	printf("������� x:\n");
	float x, y;
	scanf_s("%f", &x);
	y = x >= 5 ? 1 / x : x * x - 1;
	printf("����� = %f", y);
}

void Four()
{
	printf("���������� �������� � ���������� ������ � ��� �����, ����� ���������� �������� ��� ������ ������.\n");
	char symbol;
	printf("\n������� ������ � ����������: ");
	scanf_s("%c", &symbol);
	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
		printf("\n��� ������");
	}
	else if (symbol >= '0' && symbol <= '9') {
		printf("\n��� �����");
	}
	else 
	{
		printf("\n��� ���� ������");
	}
}

void Five()
{
	printf("������� �� ����� ������� ���������.\n");
	int x, y, z;
	for (x = 2; x <= 9; x++)
	{
		for (y = 2; y <= 10; y++)
		{
			z = x * y;
			printf("%d * %d = %d\n", x, y, z);
		}
		printf("\n");
	}
}

void Six()
{
	printf("��������� ����� n ����������� ����� ����� ���������, ��������� ����� for, while, do\n");
	int n = 9, i = 1, sum = 0;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("����� ����������� ����� = %d\n", sum);
	sum = 0;
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("����� ����������� ����� = %d\n", sum);
	sum = 0, i = 0;
	do
	{
		sum += i;
		i++;
	} while (i <= n);
	printf("����� ����������� ����� = %d\n", sum);
}

void Seven()
{
	printf("���������� �������� ���������� n! (���������� ����.)\n");
	int n = 10;
	int factorial = 1;
	while (n > 1){
		factorial *= n;
		n -= 1;
	}
	printf("��������� = %d\n", factorial);
}

void Eight()
{
	printf("����������� ������� ASCI I ����� ��������\n");
	unsigned char count;
	for (count = 32; count < 255; count += 1)
	{
		printf("  %3d - %c", count, count);
		if (count % 6 == 0)
			printf("\n");
	}
}

void Nine() 
{
	printf("������������ ������ �����. ����� ����� ���� �����.\n");
	printf("������� ����� \n");
	int number;
	scanf_s("%d", &number);
	int sum = 0;
	while (number != 0)
	{
		sum = sum + number % 10;
		number = number / 10;
	}
	printf("����� ���� = %d \n", sum);

}


int main()
{
	setlocale(LC_ALL, "Rus");

	//����� 1
	//One();

	//����� 2
	//Two();

	//����� 3
	//Three();

	//����� 4
	//Four();

	//����� 5
	//Five();

	//����� 6
	//Six();

	//����� 7
	//Seven();

	//����� 8
	//Eight();

	//����� 9
	Nine();

}
