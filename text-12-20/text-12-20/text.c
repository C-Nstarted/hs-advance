#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//	printf("haha\n");
//	return 0;
//}

//ָ�����飬�����飬�������ָ���
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}




//����ָ��
//int main()
//{
//	int* p = NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//����ָ�� - ָ������ĵ�ַ - �������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//����p��������ָ��
//}

//int main()
//{
//	char* arr[5];
//	char*( *pa)[5] = &arr;
//
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	return 0;
//} 

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}


//�������������ʽ
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//������ָ�����ʽ 
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2,3));
//	return 0;
//}


//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}

//
////������
////��������������˼
//void(*signal(int, void(*)(int)))(int);
////signal��һ����������
////signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ĺ����Ĳ�����int������������void
////signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ĺ����Ĳ�����int������������void
//
////��
//typedef void(*punf_t)(int);
//punf_t signal(int, punf_t);



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5] = { 0 };
//	//int (*pa)(int x, int y) = Add;//Sub,Mul,Div
//	int (*parr[4])(int x, int y) = { Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//// char*(*pf)(char*,const char*)
////2.дһ������ָ����pfArr���ܹ����4��my_strcpy�ĺ�����ַ
////char*(*pfArr)(char*,const char *)




//�������ļ�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****************************\n");
//	printf("*****  1.Add    2.Sub  *****\n");
//	printf("*****  3.Mul    4.Div  *****\n");
//	printf("*****  0.exit   ************\n");
//	printf("****************************\n");
//	
//}
//int main()
//{	
//	int input=0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������2������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������2������%d%d\n", x, y);
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������2������%d%d\n", x, y);
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������2������%d%d\n", x, y);
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****************************\n");
//	printf("*****  1.Add    2.Sub  *****\n");
//	printf("*****  3.Mul    4.Div  *****\n");
//	printf("*****  0.exit   ************\n");
//	printf("****************************\n");
//
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while(input);
//	return 0;
//}


////�ص�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****************************\n");
//	printf("*****  1.Add    2.Sub  *****\n");
//	printf("*****  3.Mul    4.Div  *****\n");
//	printf("*****  0.exit   ************\n");
//	printf("****************************\n");
//
//}
//void CaLc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������2������");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			CaLc(Add);
//			break;
//		case 2:
//			CaLc(Sub);
//			break;
//		case 3:
//			CaLc(Mul);
//			break;
//		case 4:
//			CaLc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


////ָ����ָ�������ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int(*pf)(int, int);//����ָ��
//	int(*paArr[4])(int, int);//paArr��һ������-����ָ�������
//	//ppaArr��һ��ָ����ָ�������ָ��
//	int(*(*ppaArr)[4])(int, int) = &paArr;
//	//ppaArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ��������һ������ָ�� - int(*)(int, int)
//	return 0;
//}


//�ص�����
//void print(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}


//ð������
//void BubbluSort(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	//printf("%d ", arr[i]);
//}
//
////qsort	���������������͵�����
//int main()
//{
//	//ð��������
//	//ð������������������������
//	int arr[] = { 1,3,5,7,9,0,2,4,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbluSort(arr, sz);
//	int i = 0;
//	for (i = 0;i< sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	void* p = &a;
//	//void* ���͵�ָ��  ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ��  ���ܽ��н����ò���
//	//void* ���͵�ָ��  ���ܽ���+/-�����Ĳ���
//	return 0;
//}


//qsort����
#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 1,3,5,7,9,0,2,4,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0;i< sz; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//}
//int main()
//{
//	test1();
//	return 0;
//}



//int cmp_float(const void* e1, const void* e2)
//{
//	//if (*(float*)e1 == *(float*)e2)
//	//	return 0;
//	//else if (*(float*)e1 > *(float*)e2)
//	//	return 1;
//	//else
//	//	return -1;
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 4.0,5.0,6.0,7.0,8.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ", f[i]);
//	}
//}
//int main()
//{
//	test2();
//	return 0;
//}


//������
 /*int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age  - ((struct stu*)e2)->age  ;
}
 struct stu 
 {
	 char name[20];
	 int age;
 };
 void test3()
 {
	 struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	 int sz = sizeof(s) / sizeof(s[0]);
	 qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
 }
int main()
{
	test3();
	return 0;
}*/


//������
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcpm (((struct stu*)e1)->name ,((struct stu*)e2)->name)   ;
//}
// struct stu
// {
//	 char name[20];
//	 int age;
// };
// void test3()
// {
//	 struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	 int sz = sizeof(s) / sizeof(s[0]);
//	 qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
// }
//int main()
//{
//	test3();
//	return 0;
//}





