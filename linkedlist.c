#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node;
node *head=0;

insert_rear(int a)
{
node *temp;
temp=(node*)malloc(sizeof(node));
temp->data=a;
temp->next=0;
if(head==0)
head=temp;
else
{
node *temp1=head;
while((temp1->next)!=0)
{
temp1=temp1->next;
}
temp1->next=temp;
}
}

insert_front(int a)
{
node *temp;
temp=(node*)malloc(sizeof(node));
temp->data=a;
temp->next=head;
head=temp;
}
void display()
{
node *temp=head;
while(temp!=0)
{
printf("%d ",temp->data);
temp=temp->next;
}
}
void main()
{
int a=1,n;
while(a!=0)
{
printf("\nenter 1 for insert at rear\n enter 2 22for insert at front\n");
scanf("%d",&n);
printf("\nenter the element leaving 0\n");
scanf("%d",&a);
if(a!=0)
{
if(n==1)
{
insert_rear(a);
printf(" the list is :\n");
}
else
{
insert_front(a);
printf(" the list is :\n");
}
display();
}
}
}
