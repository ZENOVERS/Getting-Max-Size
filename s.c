#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <math.h>
#include <ctype.h>

#define �� (((len * 1 / 2) / 2))
#define �� 2 * pow((((len * 1 / 2) / 2)), 2)
#define �� len - 2 * ((((len * 1 / 2) / 2)))

void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void CRB(void)
{
	while (getchar() != '\n');
}

int main()
{
	system("title Find the Maximum Area By Using Quadratic Functions");

	float len = 0, ����, ����, ����;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	puts("==============(��)=============== ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	puts("l\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl  (��Ÿ��)\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\n---------------------------------");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	puts("\n\n����. �ڿ��� ���� �ְ� ������ �� ���� ��Ÿ���� ���� �츮�� ���� �����̴�.\n��Ÿ���� ��ü ���̸� �����ؼ� ������ �츮�� �ִ� ���̸� ����غ���.");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n�� ��Ÿ�� ���̸� �Է��ϼ���: ");
	scanf("%f", &len);

	CRB();

second:

	if (len < 0 || len - (int)len != 0 || len == 0 || len > 100000000)
	{
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("\n���� �Ǵ� �ʹ� ū ��, �Ҽ� �� �߸��� ���� �Էµƽ��ϴ�.\n\n");
		
		goto re;
	}

	���� = (len * len) / 8;
	���� = len / 4;
	���� = len - (���� * 2);

	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	puts("==============(��)=============== ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("l\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\nl\t\t\t\tl\n---------------------------------\n");
	gotoxy(3, 5);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("����: %f", ��);
	gotoxy(0, 11);
	printf("[--------------------------------]");
	gotoxy(12, 11);
	printf("%f", ��);

	gotoxy(34, 1);
	printf("��");
	for (int i = 1; i < 9; i++)
	{
		gotoxy(35, i + 1);
		printf("l");
	}
	gotoxy(34, 10);
	printf("��");

	gotoxy(34, 5);
	printf("%f", ��);

	gotoxy(12, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n�츮�� ������ �ִ� ���� : %f\n", ����);
	printf("���� ���� : %f\n", ����);
	printf("���� ���� ���� : %f\n\n\n", ����);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("---Ǯ��---\n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	printf("�� ��Ÿ�� ���� : %f\n\n\n", len);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("���θ� x, ���θ� (%f - 2x)��� �� ��, �츮�� ���̴� x(%f - 2x)���� �����Ѵ�.\n", len, len);
	printf("�����Լ��� �ִ񰪰� �ּڰ��� �̿��Ͽ� ���ϸ�, y = %fx - 2xx �� �ȴ�.\n", len);
	printf("�� ���� ���� �������� �̿��ϸ�, y = -2(xx - %fx + %f - %f)�� ����ȴ�.\n", len * 1 / 2, pow((((len * 1 / 2) / 2)), 2), pow((((len * 1 / 2) / 2)), 2));
	printf("�׷��� y = -2(x - %f)(x - %f) + %f\n", ��, ��, ��);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("\n��������� x�� ���� ���� 0�� �Ǿ� �ϴ�, ���δ� %f�̰�, �ִ� ���̴� �����Լ��� �ִ��� %f�̴�.\n\n\n", ��, ��);

re:

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	printf("�ٽ� ����Ͻðڽ��ϱ�? ���� �Է��� �ּ���: ");
	scanf("%f", &len);

	CRB();

	system("cls");
	���� = 0, ���� = 0, ���� = 0;
	goto second;


	return 0;
}