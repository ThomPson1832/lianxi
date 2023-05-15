#include "stdio.h"
typedef struct
{
	int data[50];
	int top;
}seqstack;
void initstack(seqstack* s)
{
	s->top = -1;
}
int empty(seqstack* s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;

}
void push(seqstack* s, int x)
{
	if (s->top == 49)
		printf("overflow!\n");
	else
	{
		s->top++;
		s->data[s->top] = x;
	}
}
char pop(seqstack* s)
{
	int x;
	if (empty(s))
	{
		printf("underflow!\n");
		x = '\0';
	}
	else
	{
		x = s->data[s->top];
		s->top--;
	}
	return x;
}
void multibase(int n, int b)
{
	int i;
	seqstack s;
	initstack(&s);
	while (n != 0)
	{
		push(&s, n % b);
		n = n / b;
	}
	printf("ת����Ľ����");
	while (!empty(&s))
	{
		i = pop(&s);
		printf("%d", i);
	printf("\n");
}main()
{
	int n, b;
	}
	printf("������ʮ��������");
	scanf("%d", &n);
	printf("������Ҫת���Ľ��ƣ�");
	scanf("%d", &b);
	multibase(n, b);
}