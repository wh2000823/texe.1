#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include<stdio.h>
int fun(int n)
{
	int a, b, c, d;
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	if ((b == 0) && n == (a * 100 + c * 10 + d) * 9)
		return 1;
	else
		return 0;
}
void main()
{
	int i;
	for (i = 1000; i < 10000; i++)
		if (fun(i) == 1)
			printf("%6d",i);
	printf("\n");

}







//int add(int num)
//{
//	int flag = 1, i;
//	for(i=2;i<=sqrt(num);i++)
//		if (num%i == 0)
//		{
//			flag = 0;
//			break;
//		}
//
//	return flag;
//}
//int main()
//{
//	int n;
//	/*printf("������һ������");*/
//	scanf("%d", &n);
//	if (add(n) == 1)
//	printf("%d��һ������", n);
//	else
//		printf("%d����һ������", n);
//
//
//
//	return 0;
//}
//








//float add(float x)
//{
//	if (x >= 0)
//		printf("x�ľ���ֵ��%f\n", x);
//	else printf("x�ľ���ֵ��%f\n", -x);
//	return 0;
//}
//float main()
//{
//	float a;
//
//	scanf("%f", &a);
//	printf("%f\n", add(a));
//	return 0;
//	
//
//
//}









//int add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int x, y;
//	scanf("%d,%d", &x, &y);
//	int z = add(x, y);
//	printf("%d\n",z);
//	return 0;
//
//
//}







//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	printf("%s\n",pb-> name);
//	printf("%d\n",pb-> price);
//
//	/*printf("����:%s\n",b1.name);
//	printf("�۸�:%dԪ\n",b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);*/
//
//
//
//	
//		
//	
//
//
//
//
//	return 0;
//}








//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;
//	printf("%p\n", p);
//	*p = 50;
//	printf("%d\n", a);
//
//
//return 0;
//}










//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%d\n", sizeof(pc));
//
//	return 0;
//}









//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n",p);
//	*p = 20;
//	printf("a=%d\n", a);
//
//		return 0;
//}

//int Max(int x, int y)
//{
//	if (x < y)
//		return x;
//	else return y;
//}
//#define Max(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n",max);
//	return 0;
//}










//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//}








//int main()
//{
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
////void test()
////{
////	static int a = 1;
////	a++;
////	printf("%d\n", a);
////}
////int main()
////{
////	int i = 0;
////	while (i < 5)
////	{
////		test();
////		i++;
////
////
////
////	}
////	return 0;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//

//int main()
//{
//	int a, b, c;
//	scanf("%d\n,%d\n", &a, &b);
//	c = a / b;
//	printf("%d\n", c);
//}
//int main()
//{
//	int a, b;
//	scanf("%d,%d", &a, &b);
//	if (a > b)printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	return 0;
//	
//
//
//
//
//
//}
