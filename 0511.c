#include <stdio.h>
#include <stdlib.h>

#if 0
int main(){
	int a = 10;
	int b = 16;
	char str[20] = "";
	int r;
	int i = 0;
	scanf("%d%d", &a, &b);
	while (a != 0)
	{
		r = a%b;
		if (r < 10)
		{
			str[i] = r + '0';
		}
		else
			str[i] = r - 10 + 'A';
		a = a / b;
		++i;
	}
	for (--i; i >= 0; --i)
	{
		printf("%c ", str[i]);
	}
	system("pause");
	return 0;
}
#endif

#if 0
void main()
{
	char a = 0x80;
	unsigned char b = 0x80;
	unsigned int c = a;
	int d = a;
	printf("a=%d\n,a=%u\n", a,a);//-128 
	printf("b=%d\n,b=%u\n", b,b);
	printf("c=%d\n,c=%u\n", c,c);
	printf("d=%d\n,d=%u\n", d,d);
	system("pause");

}
#endif

#if 0
void main()
{
	int i;
	char str[1000];
	for (i = 0; i < 1000; ++i)
	{
		str[i] = -1 - i;
	}
	printf("%d\n", strlen(str));//\0->'0'
	system("pause");
}
#endif

#if 0
void main()
{
	int a = 3, b = 4, c = 5;
	while (a < b < c)
	{
		int t = a;
		a = b;
		b = t;
		c--;
	}
	printf("%d,%d,%d\n", a, b, c);
	system("pause");
}
#endif

#if 0
void main()//´ó¶ËÐ¡¶Ë
{
	int a = 0x11223344;
	short int b = a;
	char c = a;
	printf("%x,%x,%x\n", a, b, c);
	system("pause");
}
#endif

#if 0
void main()
{
	int a = 6;
	float b = 4.6;
	printf("%d\n", (int)b);
	system("pause");
}
#endif
/*
||||||||||

*/
#include <Windows.h>
void main()
{
	int i;
	int j;
	HANDLE handle;
	COORD pos = { 0, 0 };
	while (1){
		for (i = 0; i < 10; ++i){
			printf("||||||||||");
			Sleep(100);
			printf("\b\b\b\b\b\b\b\b\b\b\b");
			printf("          ");
			printf("\n");
		}
		handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(handle, pos);
	}
}