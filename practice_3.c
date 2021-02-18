#define _CRT_SECURE_NO_WARNINGS  //取消scanf不安全报警
#include <stdio.h>

//1.条件表达式的执行次数总是比循环体的执行次数多一次
/*2.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20)
			break;
		if (b % 3 == 1) {
			b = b + 3;
			continue; //跳过本次循环后面的代码，直接回到for循环，进行a++
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
} // 运行结果：a=8
*/

//3.编写程序数一下1到100的所有整数中出现多少个数字9
/*
int main()
{
	int i;
	int count = 0;
	for (i = 1; i < 101; ++i) 
	{
		if (i % 10 == 9)  //判断个位数是9
			count++;
		if (i / 10 == 9) //判断十位数是9
			count++;			
	}
	printf("count = %d\n" , count);
	return 0;
}
*/

//分数求和：计算1/1-1/2+1/3-1/4+1/5-1/6......+1/99-1/100的值，打印出结果
/*
int main()
{
	int i;
	double sum = 0;
	int flag = 1;

	for (i = 1; i < 101; ++i) {
		sum += flag * 1.0 / i; 
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}
*/

//求最大值：求10个整数中最大值
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int max = arr[0]; //最大值
	int sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
	for (i = 1; i < sz; i++) {
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n",max);
	return 0;
}
*/

//在屏幕上输出9*9乘法口诀表
/*
int main()
{
	int i = 0;  //打印行
	for (i = 1; i <= 9; ++i)   //确定打印9行
	{
		//打印一行
		int j = 0; //打印列
		for (j = 1; j <= i; ++j) 
		{
			printf("%d*%d=%-2d  ", i, j, i*j);  //-2d：左对齐； 2d：右对齐
		}
		printf("\n");
	}
	return 0;
}
1*1=1
2*1=2 2*2=4
3*1=3 3*2=6 3*3=9
*/

/*
int main()
{
	int i = 0;//外层循环变量,控制行
	int j = 0;//内部循环变量,控制列
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d * %d = %d  ", j, i, i * j);
		}
		//每行输出完后换行
		printf("\n");
	}
	return 0;
}
*/
