#include <windows.h>
#include <stdio.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float Uo;
	float Ui;
	float R1;
	float R2;
	printf("калькулятор расчета резисторного делителя_");
	printf("Какой параметр хотите расчитать\n1 = Uo \n2 = Ui \n3 = R1 \n4 = R2");
	int formula;
	scanf_s("%d", &formula);

	//Uo = Ui * (R2 / (R1 + R2));
	//Ui = Uo * ((R1 + R2) / R2);
	//R1 = ((Ui * R2) / Uo) - R2;
	//R2 = (Uo * R1) / (Ui - Uo);
	return 0;
}

