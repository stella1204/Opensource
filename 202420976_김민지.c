//Pg.192 - ���� 1 

//for�� �̻��.

#include<stdio.h>

int main()
{
	int num1, num2;
	printf("������ ���� 1 �Է� : ");
	scanf("%d", &num1);
	printf("������ ���� 2 �Է� : ");
	scanf("%d", &num2);

	printf("\n�� ���� �� : %d + %d = %d", num1, num2, num1 + num2);
	printf("\n�� ���� �� : %d - %d = %d", num1, num2, num1 - num2);
}

//for��, �迭 ���.

#include<stdio.h>

int main()
{
	int num[2] = { 0 };
	for (int i = 0; i < 2; i++)
	{
		printf("������ ���� %d �Է� : ",i+1);
		scanf("%d", &num[i]);
	}

	printf("\n�� ���� �� : %d + %d = %d", num[0], num[1], num[0] + num[1]);
	printf("\n�� ���� �� : %d - %d = %d", num[0], num[1], num[0] - num[1]);
}


//Pg.192 - ���� 2 

#include<stdio.h>

int main()
{
	float A = 0, B = 0;
	printf("������ ���� A �Է� : ");
	scanf("%f", &A);
	printf("������ ���� B �Է� : ");
	scanf("%f", &B);

	if (A < B) {
		printf("\n(���� A : %.2f ���� B: %.2f) A < B �̹Ƿ�", A, B);
		printf("\n%.2f / %.2f = %.2f", A, B, A / B);
	}
	else if (A > B) {
		printf("\n(���� A : %.2f ���� B: %.2f) A > B �̹Ƿ�", A, B);
		printf("\n%.2f * %.2f = %.2f", A, B, A * B);
	}
	else if (A = B) {
		printf("\n(���� A : %.2f ���� B: %.2f) A = B �̹Ƿ�", A, B);
		printf("\n%.2f - 5 = %.2f, %.2f + 3 = %.2f", A, A - 5, B, B + 3);
	}
}


//Pg.192 - ���� 3

//�ݺ��� ���

#include<stdio.h>

int main()
{
	int use_t;
	int d, h, m;
	int pay = 0;
	int card = 0; //��ȣ���� ������ 0 / ������ 1

	printf("<�������� ���α׷�>");
	printf("\n\n������ ���ð��� �Է��� �ֽʽÿ� �Է� ��) ��ĥ ��ð� ��� : ");
	scanf("%d %d %d", &d, &h, &m);
	
	//��ȣ���� ���� ����.
	while (1) {
		printf("��ȣ������ �����ʴϱ�? (����) (������ 1 ������ 0 �Է�): ");
		scanf("%d", &card);
		if (card == 1 || card == 0) {
			break;
		}
		else {
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է��Ͽ� �ֽñ� �ٶ��ϴ�.\n");
		}
	}

	//�ð� ġȯ
	d = d * 24; //d to h
	m = m + (h * 60) + (d * 60); // �� ġȯ. �� = �� + (h to m) + (dh to m)
	m = m - 30; //�ʹ� 30�� ����.
	

	if (card == 0)  //��ȣ���� ����
	{
		pay = pay + 500 + (m / 15 * 300);
	}
	else			//��ȣ���� ����
	{
		if (m > 240) {
			m = m -240;  //4�ð� ����

			pay = pay + 500 + (m / 15 * 300);
		}
	}
	printf("\n���Ͽ��� �ΰ��� ���� ����� %d �� �Դϴ�.\n", pay);
}

//Pg.192 - ���� 4

//for�� ���.

#include<stdio.h>

int main()
{
	printf("<1���� 99���̿� �ִ� ���� �� 7�� ����ų� 9�� ����� ���� ����ϱ�>");
	printf("\n\n7�� ����ų� 9�� ����� ���� : \n>> ");
	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}


//Pg.192 - ���� 5 

#include<stdio.h>

int main()
{
	int ko, en, ma, aver;
	printf("���� ������ ������ �Է��� �ּ���. : ");
	scanf("%d", &ko);
	printf("���� ������ ������ �Է��� �ּ���. : ");
	scanf("%d", &en);
	printf("���� ������ ������ �Է��� �ּ���. : ");
	scanf("%d", &ma);

	aver = (ko + en + ma) / 3;

	if (aver >= 90) {
		printf("\n������ ������ A �Դϴ�.");	
	}
	else if (aver >= 80) {
		printf("\n������ ������ B �Դϴ�.");
	}
	else if (aver >= 70) {
		printf("\n������ ������ C �Դϴ�.");
	}
	else if (aver >= 50) {
		printf("\n������ ������ D �Դϴ�.");
	}
	else {
		printf("\n������ ������ F �Դϴ�.");
	}
	printf("\n��� : %d ��  (���� : %d��, ���� : %d��, ���� : %d��)", aver, ko, en, ma);
}