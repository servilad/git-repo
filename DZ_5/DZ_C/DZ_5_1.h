#include <windows.h>
#include <stdio.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float Uo = 1, x1,x2,x3;
	float Ui = 0;
	float R1 = 0;
	float R2 = 0;
	
	
	int formula;

	printf("Программа расчета резисторного делителя\n");
	printf("Какой параметр хотите расчитать\n1 = Uo \n2 = Ui \n3 = R1 \n4 = R2.\n");
	printf("После ввода параметра введите слева-направо известные данные.");
	
	scanf_s ("%d", &formula);
	while (1)
	{
		if (formula == 1 || formula == 2 || formula == 3 || formula == 4)
		{
			scanf_s("%f", &x1);
			scanf_s("%f", &x2);
			scanf_s("%f", &x3);
			break;

		}
		printf("ввели некоректный параметр, попробуййте снова");
		scanf_s("%d", &formula);
	}
	

	switch (formula)
	{
		case 1: 
			Uo = x1 * ( x3 / (x2 + x3));
			printf("расчитанный парметр Uo = %f ", Uo);
			break;
		case 2: Ui = x1 * ((x2 + x3) / x3);
			printf("расчитанный парметр Ui = %f", Ui);
			break;
		case 3: R1 = ((x2 * x3) / x1) - x3;
			printf("расчитанный парметр R1 = %f", R1);
			break;
		case 4: R2 = (x1 * x3) / (x2 - x1);
			printf("расчитанный парметр R2  = %f", R2);
		break;
	default:
		break;
	}

	printf("Конец программы!");

	//Uo = Ui * (R2 / (R1 + R2));
	//Ui = Uo * ((R1 + R2) / R2);
	//R1 = ((Ui * R2) / Uo) - R2;
	//R2 = (Uo * R1) / (Ui - Uo);
	return 0;
}

