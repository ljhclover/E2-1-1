/*数据结构试验 第六次，队列与栈*/
/*考察栈的基本实现，以及用于队列*/
/*实验编号：2-1-1*/
/*2016-5-18编辑*/

#include<stdio.h>
#include<stdlib.h>

#ifndef Stack01
#define Stack_Length 6
#define OK 1               //Stack在里面是不是关键字
#define ERROR -1           //这样表示更加清晰
typedef int ElementType;
typedef struct Stack_LinkList//链表实现栈
{
	ElementType Data;
	Stack_LinkList *Next;

}*Stack_LNode;

int CreatStack(Stack_LNode &L, int n);
int Push_Stack(Stack_LNode &L, ElementType e);
int Pop_Stack(Stack_LNode &L, ElementType e);

#endif // !Stack01

int main()
{

}
/*************************************************/
//建立一个新的空栈
//参数含义 n 表示当前建立新栈的节点数目
//函数返回值OK表示成功
//函数返回ERROR表示失败
/*************************************************/
int CreatStack(Stack_LNode &L, int n)
{
	int i;
	Stack_LNode p;
	L =(Stack_LNode)malloc(sizeof(Stack_LNode));
	if (!L)
	{
		printf("分配内存空间失败，程序退出\n");
		return ERROR;
	}
	else
	{
		L->Next = NULL;//最开始栈没有节点，故直接指向NULL
		printf("Pease input the numbers to combine the stack \n");
		for (i = 0; i < n; i++)
		{
			p = (Stack_LNode)malloc(sizeof(Stack_LNode));
			if (!L)
			{
				printf("分配内存空间失败，程序退出\n");
				return ERROR;
			}
			printf("please input the number to combine the stack\n");
			scanf_s("%f", &p->Data);
			p->Next = L->Next;//就是链表插入的顺序，先插入后面的然后再修改前面的指针，避免指针后面的信息丢失。
			L->Next = p;
		}
	}
}

int Push_Stack(Stack_LNode &L, ElementType e)
{

}

int Pop_Stack(Stack_LNode &L, ElementType e)
{

}