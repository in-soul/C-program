#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//计算n的阶乘
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

//计算1!+2!+3!+4!....+10!
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

//计算1!+2!+3!+4!....+10!(算法优化)
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

//在一个有序数组里查找具体的某个数字n

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


////打印向中间聚拢的字符串
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
//		Sleep(500);//需要引用windows.h
//		system("cls");//清空屏幕
//	}
//	return 0;
//
//}

//模拟输入3次密码
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

//写一个猜数字游戏
//生成一个1-100之间的随机数
//猜数字
//猜错：告诉猜大了或者小了
//猜对：恭喜

#include <stdlib.h>  //rand和srand函数
#include <time.h>	//time函数

void game()
{
	int x = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入数字：");
		scanf("%d", &input);
		if (input > x)
		{
			printf("对不起，猜大了\n");
		}
		else if (input < x)
		{
			printf("对不起，猜小了\n");
		}
		else
		{
			printf("恭喜你猜中了\n");
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入:\n");
		} 
	}while (input);

	return 0;
}