#include <iostream>
#include <locale.h>
#include <stdio.h>


using namespace std;

void One()
{
	printf("По координатам точки, определить номер координатной четверти, в которой находится данная точка\n");
	int x = 2;
	int y = -1;
	if (x > 0 && y > 0)
	{
		printf("Точка находится в первой координатной четверти");
	}
	else if (x < 0 && y > 0)
	{
		printf("Точка находится во второй координатной четверти");
	}
	else if (x < 0 && y < 0)
	{
		printf("Точка находится в третье координатной четверти");
	}
	else
	{
		printf("Точка находится в четвертой координатной четверти");
	}
}

void Two()
{
	printf("Написать калькулятор (вычисление простейших арифметических операций, на основании введенной пользователем операции и двух операндов).\n");
	printf("Введите первое число: ");
	float one, two;
	int mark;
	scanf_s("%f", &one);
	printf("\nВведите второе число: ");
	scanf_s("%f", &two);
	printf("\nВыберите операцию: \nсложение - 1 \nвычитание - 2 \nумножение - 3 \nделение - 4\nНомер операции = ");
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
		printf("\nУпс! Такой операции нет. Попробуйте перезапустить и заново выбрать");
	}
}

void Three()
{
	printf("Написать программу расчета y по следующему правилу (x вводится пользователем с клавиатуры), используя тернарный оператор.\n");
	printf("Введите x:\n");
	float x, y;
	scanf_s("%f", &x);
	y = x >= 5 ? 1 / x : x * x - 1;
	printf("Ответ = %f", y);
}

void Four()
{
	printf("Распознать вводимый с клавиатуры символ – это цифра, буква латинского алфавита или другой символ.\n");
	char symbol;
	printf("\nВведите символ с клавиатуры: ");
	scanf_s("%c", &symbol);
	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
		printf("\nЭто символ");
	}
	else if (symbol >= '0' && symbol <= '9') {
		printf("\nЭто цифра");
	}
	else 
	{
		printf("\nЭто иной символ");
	}
}

void Five()
{
	printf("Вывести на экран таблицу умножения.\n");
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
	printf("Вычислить сумму n натуральных чисел тремя способами, используя циклы for, while, do\n");
	int n = 9, i = 1, sum = 0;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("Сумма натуральных чисел = %d\n", sum);
	sum = 0;
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("Сумма натуральных чисел = %d\n", sum);
	sum = 0, i = 0;
	do
	{
		sum += i;
		i++;
	} while (i <= n);
	printf("Сумма натуральных чисел = %d\n", sum);
}

void Seven()
{
	printf("Определить значение факториала n! (Используем цикл.)\n");
	int n = 10;
	int factorial = 1;
	while (n > 1){
		factorial *= n;
		n -= 1;
	}
	printf("Факториал = %d\n", factorial);
}

void Eight()
{
	printf("Распечатать таблицу ASCI I кодов символов\n");
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
	printf("Пользователь вводит число. Найти сумму цифр числа.\n");
	printf("Введите число \n");
	int number;
	scanf_s("%d", &number);
	int sum = 0;
	while (number != 0)
	{
		sum = sum + number % 10;
		number = number / 10;
	}
	printf("Сумма цифр = %d \n", sum);

}


int main()
{
	setlocale(LC_ALL, "Rus");

	//номер 1
	//One();

	//номер 2
	//Two();

	//номер 3
	//Three();

	//номер 4
	//Four();

	//номер 5
	//Five();

	//номер 6
	//Six();

	//номер 7
	//Seven();

	//номер 8
	//Eight();

	//номер 9
	Nine();

}
