//Pg.192 - 문제 1 

//for문 미사용.

#include<stdio.h>

int main()
{
	int num1, num2;
	printf("임의의 숫자 1 입력 : ");
	scanf("%d", &num1);
	printf("임의의 숫자 2 입력 : ");
	scanf("%d", &num2);

	printf("\n두 수의 합 : %d + %d = %d", num1, num2, num1 + num2);
	printf("\n두 수의 차 : %d - %d = %d", num1, num2, num1 - num2);
}

//for문, 배열 사용.

#include<stdio.h>

int main()
{
	int num[2] = { 0 };
	for (int i = 0; i < 2; i++)
	{
		printf("임의의 숫자 %d 입력 : ",i+1);
		scanf("%d", &num[i]);
	}

	printf("\n두 수의 합 : %d + %d = %d", num[0], num[1], num[0] + num[1]);
	printf("\n두 수의 차 : %d - %d = %d", num[0], num[1], num[0] - num[1]);
}


//Pg.192 - 문제 2 

#include<stdio.h>

int main()
{
	float A = 0, B = 0;
	printf("임의의 숫자 A 입력 : ");
	scanf("%f", &A);
	printf("임의의 숫자 B 입력 : ");
	scanf("%f", &B);

	if (A < B) {
		printf("\n(숫자 A : %.2f 숫자 B: %.2f) A < B 이므로", A, B);
		printf("\n%.2f / %.2f = %.2f", A, B, A / B);
	}
	else if (A > B) {
		printf("\n(숫자 A : %.2f 숫자 B: %.2f) A > B 이므로", A, B);
		printf("\n%.2f * %.2f = %.2f", A, B, A * B);
	}
	else if (A = B) {
		printf("\n(숫자 A : %.2f 숫자 B: %.2f) A = B 이므로", A, B);
		printf("\n%.2f - 5 = %.2f, %.2f + 3 = %.2f", A, A - 5, B, B + 3);
	}
}


//Pg.192 - 문제 3

//반복문 사용

#include<stdio.h>

int main()
{
	int use_t;
	int d, h, m;
	int pay = 0;
	int card = 0; //보호자증 없으면 0 / 있으면 1

	printf("<주차정산 프로그램>");
	printf("\n\n주차장 사용시간을 입력해 주십시오 입력 예) 며칠 몇시간 몇분 : ");
	scanf("%d %d %d", &d, &h, &m);
	
	//보호자증 지참 여부.
	while (1) {
		printf("보호자증이 있으십니까? (지참) (있으면 1 없으면 0 입력): ");
		scanf("%d", &card);
		if (card == 1 || card == 0) {
			break;
		}
		else {
			printf("잘못된 입력입니다. 다시 입력하여 주시길 바랍니다.\n");
		}
	}

	//시간 치환
	d = d * 24; //d to h
	m = m + (h * 60) + (d * 60); // 분 치환. 분 = 분 + (h to m) + (dh to m)
	m = m - 30; //초반 30초 제외.
	

	if (card == 0)  //보호자증 없음
	{
		pay = pay + 500 + (m / 15 * 300);
	}
	else			//보호자증 있음
	{
		if (m > 240) {
			m = m -240;  //4시간 제외

			pay = pay + 500 + (m / 15 * 300);
		}
	}
	printf("\n귀하에게 부과된 주차 요금은 %d 원 입니다.\n", pay);
}

//Pg.192 - 문제 4

//for문 사용.

#include<stdio.h>

int main()
{
	printf("<1부터 99사이에 있는 정수 중 7의 배수거나 9의 배수인 정수 출력하기>");
	printf("\n\n7의 배수거나 9의 배수인 정수 : \n>> ");
	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}


//Pg.192 - 문제 5 

#include<stdio.h>

int main()
{
	int ko, en, ma, aver;
	printf("국어 과목의 성적을 입력해 주세요. : ");
	scanf("%d", &ko);
	printf("영어 과목의 성적을 입력해 주세요. : ");
	scanf("%d", &en);
	printf("수학 과목의 성적을 입력해 주세요. : ");
	scanf("%d", &ma);

	aver = (ko + en + ma) / 3;

	if (aver >= 90) {
		printf("\n귀하의 성적은 A 입니다.");	
	}
	else if (aver >= 80) {
		printf("\n귀하의 성적은 B 입니다.");
	}
	else if (aver >= 70) {
		printf("\n귀하의 성적은 C 입니다.");
	}
	else if (aver >= 50) {
		printf("\n귀하의 성적은 D 입니다.");
	}
	else {
		printf("\n귀하의 성적은 F 입니다.");
	}
	printf("\n평균 : %d 점  (국어 : %d점, 영어 : %d점, 수학 : %d점)", aver, ko, en, ma);
}