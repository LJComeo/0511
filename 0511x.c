#include <stdio.h>
#include <stdlib.h>

//������*ָ�������
//Ұָ��:1.����һ��ָ�룬û�кϷ���   2.malloc֮��û���ͷ�
/*
int (*p2)[3]  ����ָ��
int *p3[4]    ָ������
int (*p4[3])(int,int)   ����ָ������
int *p5(int,int)    ָ�뺯��
*/
#if 0
void swap1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
void swap2(int *x, int*y)
{
	int *t;
	t = x;
	x = y;
	y = t;
}
void swap3(int *x, int*y)
{
	int *t;
	t = *x;
	*x = *y;
	*y = t;
}
void main(){
	int a = 5;
	//int *p;Ұָ��
	int b = 7;
	swap3(&a, &b);
	printf("%d,%d\n", a, b);
	system("pause");
}
#endif

#if 0
//*p:�Ե�ǰλ�ÿ�ʼ��*p����Ϊƫ����ȡֵ
void main(){
	char a[] = { 1, 1, 1, 1, 1 };
	int *p = (int*)a;
	printf("*p=%d\n", *p);
	system("pause");
}
#endif

#if 0
void main(){
//�����±꣺��ǰԪ�ؾ��׵�ַ��ƫ����
	//���� һ�� ����
	int a[] = { 1, 2, 3, 4, 5 };
	int b[3][5];
	int *p = (int *)(&a + 1);
	printf("%d\n", *(p - 1));

	system("pause");
}
#endif

#if 0
void main(){
	int a[3][4];
	printf("%d,%d,%d\n", a, a[0], &a[0][0]);
	printf("%d,%d,%d\n", a, a + 1, &a[1]);
	system("pause");
}
#endif

//ð������
#if 0
void main(){
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int i, j, t;
	int n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n-1; ++i){
		for (j = 0; j < n - i - 1; ++j){
			if (a[j] < a[j + 1]){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; ++i)
		printf("%d ", a[i]);
	printf("\n");
	system("pause");
}
#endif

//ð�����򣨴�ָ�룩
#if 0
void main(){
	int a[]={7,6,8,9,0,1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int *p = a, *q = a + 1, *end = a + n - 1;
	for (p = a; p < a + n - 1; ++p){
		for (q = a; q < end; ++q){
			if (*q < *(q + 1)){
				int t = *q;
				*q = *(q + 1);
				*(q + 1) = t;
			}
		}
		end--;
	}
	for (p = a; p < a + n; ++p)
		printf("%d ", *p);
	printf("\n");
	system("pause");
}
#endif

#if 0
void main(){
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 9, 8 };
	int *p=&a[0][0];
	int i;
	int j;
	for (i = 0; i < 3 * 4; ++i){
		printf("%d ", *(p + i));
	}
	printf("\n");
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 4; ++j){
			printf("%d ", *(p + i * 4 + j));
		}
		printf("\n");
	}

	system("pause");
}
#endif

//�ַ�����ָ��
#if 0
void main(){
	char b[5] = "1234";
	char *p = "12345";
	b[3] = 'k';
	p++;
	puts(b);
	puts(p);
	system("pause");
}
#endif

#if 0
void main(){
	char *p = "123";
	char *q = "456";
	char *t;
	t = p;
	p = q;
	q = t;
	puts(p);
	puts(q);
	system("pause");
}
#endif

#if 0
void main(){
	int a[3][4];
	int(*p)[4];
	int *q[3];
	p = a;
	int i;
	for (i = 0; i < 3; ++i){
		q[i] = a[i];
	}
	system("pause");
}
#endif

//����ָ��
#if 1
int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}
int mul(int  a, int b){
	return a*b;
}
int Div(int a, int b){
	if (b != 0)
		return a / b;
}
void main(){
	/*int(*p)(int, int);
	p = add;
	printf("%d\n", p(4, 5));
	p = sub;
	printf("%d\n", p(4, 5));*/
	
	int(*p[])(int,int) = { add, sub, mul, Div };
	int n = sizeof(p) / sizeof(p[0]);
	int i;
	for (i = 0; i < n; ++i){
		printf("%d\n", p[i](5,4));
	}
	system("pause");
}
#endif