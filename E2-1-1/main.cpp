/*���ݽṹ���� �����Σ�������ջ*/
/*����ջ�Ļ���ʵ�֣��Լ����ڶ���*/
/*ʵ���ţ�2-1-1*/
/*2016-5-18�༭*/

#include<stdio.h>
#include<stdlib.h>

#ifndef Stack01
#define Stack_Length 6
#define OK 1               //Stack�������ǲ��ǹؼ���
#define ERROR -1           //������ʾ��������
typedef int ElementType;
typedef struct Stack_LinkList//����ʵ��ջ
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
//����һ���µĿ�ջ
//�������� n ��ʾ��ǰ������ջ�Ľڵ���Ŀ
//��������ֵOK��ʾ�ɹ�
//��������ERROR��ʾʧ��
/*************************************************/
int CreatStack(Stack_LNode &L, int n)
{
	int i;
	Stack_LNode p;
	L =(Stack_LNode)malloc(sizeof(Stack_LNode));
	if (!L)
	{
		printf("�����ڴ�ռ�ʧ�ܣ������˳�\n");
		return ERROR;
	}
	else
	{
		L->Next = NULL;//�ʼջû�нڵ㣬��ֱ��ָ��NULL
		printf("Pease input the numbers to combine the stack \n");
		for (i = 0; i < n; i++)
		{
			p = (Stack_LNode)malloc(sizeof(Stack_LNode));
			if (!L)
			{
				printf("�����ڴ�ռ�ʧ�ܣ������˳�\n");
				return ERROR;
			}
			printf("please input the number to combine the stack\n");
			scanf_s("%f", &p->Data);
			p->Next = L->Next;//������������˳���Ȳ�������Ȼ�����޸�ǰ���ָ�룬����ָ��������Ϣ��ʧ��
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