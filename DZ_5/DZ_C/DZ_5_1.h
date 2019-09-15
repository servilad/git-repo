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

	printf("��������� ������� ������������ ��������\n");
	printf("����� �������� ������ ���������\n1 = Uo \n2 = Ui \n3 = R1 \n4 = R2.\n");
	printf("����� ����� ��������� ������� �����-������� ��������� ������.");
	
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
		printf("����� ����������� ��������, ����������� �����");
		scanf_s("%d", &formula);
	}
	

	switch (formula)
	{
		case 1: 
			Uo = x1 * ( x3 / (x2 + x3));
			printf("����������� ������� Uo = %f ", Uo);
			break;
		case 2: Ui = x1 * ((x2 + x3) / x3);
			printf("����������� ������� Ui = %f", Ui);
			break;
		case 3: R1 = ((x2 * x3) / x1) - x3;
			printf("����������� ������� R1 = %f", R1);
			break;
		case 4: R2 = (x1 * x3) / (x2 - x1);
			printf("����������� ������� R2  = %f", R2);
		break;
	default:
		break;
	}

	printf("����� ���������!");

	//Uo = Ui * (R2 / (R1 + R2));
	//Ui = Uo * ((R1 + R2) / R2);
	//R1 = ((Ui * R2) / Uo) - R2;
	//R2 = (Uo * R1) / (Ui - Uo);
	return 0;
}

