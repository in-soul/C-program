#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//����n�Ľ׳�
//int main()
//{
//	int fac = 1;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		fac *= i;
//	}
//
//	printf("%d\n", fac);
//	return 0;
//}

//����1!+2!+3!+4!....+10!
// 
//int main()
//{
//	int sum = 0;
//	int fac = 0;
//	int i = 10;
//	int j = 0;
//	for(i=1;i<=10;i++)
//	{
//		fac = 1;
//		for (j = 1; j <= i; j++)
//		{
//			fac *= j;
//		}
//		sum += fac;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//����1!+2!+3!+4!....+10!(�㷨�Ż�)
// 
//int main()
//{
//	int sum = 0;
//	int fac = 1;
//	int i = 10;
//	int j = 0;
//	for(i=1;i<=10;i++)
//	{
//		fac *= i;
//		sum += fac;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//

//��һ��������������Ҿ����ĳ������n

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int search_num;
//	printf("type in the number you want to find:");
//	scanf("%d", &search_num);
//
//	int lenth = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = lenth - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < search_num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > search_num)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("found the number %d:%d", search_num, mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("didn't find the number %d", search_num);
//	}
//
//	return 0;
//}


////��ӡ���м��£���ַ���
//#include <string.h>
//#include <windows.h>
//
//
//int main()
//{
//	char input[] = "wokezhenshiyigedacongmingne";
//	char output[] = "***************************";
//	int lenth = strlen(input);
//	int left = 0;
//	int right = lenth - 1;
//	printf("%s\n", output);
//
//	while (left <= right)
//	{
//		output[left] = input[left];
//		output[right] = input[right];
//		left++;
//		right--;
//		printf("%s\n", output);
//		Sleep(500);//��Ҫ����windows.h
//		system("cls");//�����Ļ
//	}
//	return 0;
//
//}

//ģ������3������
//#include <string.h>

//int main()
//{
//	char password[20] = {0};
//	printf("please typein password:");
//	int i = 0;
//	for (i=0;i<3;i++)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("login!\n");
//			break;
//		}
//		else
//		{
//			if (i != 2)
//			{
//				printf("password wrong,please retype:");
//			}
//		}
//	}
//	if (i == 3)
//	{
//		printf("password wrong for three times,program stop!\n");
//	}
//	return 0;
//}

//дһ����������Ϸ
//����һ��1-100֮��������
//������
//�´����߲´��˻���С��
//�¶ԣ���ϲ

#include <stdlib.h>  //rand��srand����
#include <time.h>	//time����

void game()
{
	int x = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("���������֣�");
		scanf("%d", &input);
		if (input > x)
		{
			printf("�Բ��𣬲´���\n");
		}
		else if (input < x)
		{
			printf("�Բ��𣬲�С��\n");
		}
		else
		{
			printf("��ϲ�������\n");
			break;
		}
	}
}
void menu()
{
	printf("**************\n");
	printf("*** 1.play ***\n");
	printf("*** 0.quit ***\n");
	printf("**************\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������:\n");
		} 
	}while (input);

	return 0;
}