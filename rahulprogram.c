#include<stdio.h>
#define MAXSIZE 10
int item[MAXSIZE];
int top=-1,true=1,false=0;
void push(int x)
{if (isfull())
{printf("stack overflow");
}
else
{top=top+1;
item[top]=x;
}
}
void pop()
{ 
if(isempty())
{ printf("no item is present in the stack");
}
else
{top=top-1;
}
}
int TOP()
{return item[top];
}
int isfull()
{
if(top==MAXSIZE)
return true;
else 
return false;
}
int isempty()
{if (top==-1)
return true;
else
return false;
}
void print()
{ int i=0;printf("stack\n");
for(i=0;i<=top;i++)
printf("%d",item[i]);
printf("\n");
}
int main ()
{
push(30); print();
push(20); print();
pop(); print();
push(25); print();
return 0;
}


