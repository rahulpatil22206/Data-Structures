#include<stdio.h>
#include<stdlib.h>

//program to show the usage of the singly lnked list

 struct node
{
   int data;
   struct node*next;
};

 struct node *ptr;

 struct node* head=NULL;


void create_node()
{
   ptr=(struct node*)malloc(sizeof(struct node));
}
int display()
{  int count=0;
   if(head==NULL)
  { printf("\nlist is empty"); 
    return 0; 
  }
   ptr=head;
   while(ptr!=NULL)
  { printf("%d  ",ptr->data);
    ptr=ptr->next;
    count++;
  }
   printf("\n the number of element is %d",count);
  return 1;
 }
 void InsertF(int x )
 {
   create_node();
   ptr->data=x;
   ptr->next=head;
   head=ptr;
 }
 int  InsertR(int y)
{ struct node * temp= head;

   create_node();
  ptr->data=y;
  if(head==NULL)
    { head=ptr;
      return(1);
    }


   while(temp->next!=NULL)
  {
    temp=temp->next;
  }


  temp->next=ptr;
  temp->next=ptr;
 
 return 0;

 }
int InsertP(int z,int pos)
{int i;
 create_node();
  ptr->data=z;

  if(head==NULL)
 { head=ptr;
   return 0;
 }
 if(pos==1)
 { ptr->next=head;
   head=ptr;
 }
 else
 { struct node*temp=head;
   for(i=1;i<pos;i++)
   {temp=temp->next;
   }
   ptr->next=temp->next;
  temp->next=ptr;
 return 0;
} 
 return 0;
}
 
 int deleteF()
{  struct node* temp=(struct node*)malloc(sizeof(struct node));
   if(head==NULL)
    { printf("list is empty");
     
      return 0;
      }
   temp=head;
   head=head->next;
   free(temp);
   return 1; 
 }
 int deleteR()
 {   struct node* temp=head;
     struct node* prev;
     if(head==NULL)
    { printf("list is empty");
     
      return 0;
      }

     temp=head;
     while(temp->next!=NULL)
     {  prev=temp;
        temp=temp->next;
      }
      prev->next=NULL;
      free(temp);
      return 1;  


}
    
 int deleteP(int n)
 { int i;
   struct node* temp2=(struct node*)malloc(sizeof(struct node));
   struct node* temp1=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    { printf("list is empty");
     
      return 0;
      }
    temp2=head;
   for(i=0;i<n-1;i++)
    { temp1=temp2;
      temp2=temp2->next;
     }
    temp1->next=temp2->next;
     free(temp2);        
    
     return 1;

 }


void main()
{int dat,ch,po;
 while(1)
{ printf("\n Singly linked list\n");
  printf("\n  enter your choice for operation ");
  printf("\n 1-Enter element at front ");
  printf("\n 2-Enter element at end ");
  printf("\n 3-Enter element at any position ");
  printf("\n 4-Display ");
  printf("\n 5-Delete at front ");
  printf("\n 6-Delete at end ");
  printf("\n 7-Delete at any position:");
  printf("\n 8-Exit :\n CHOICE:");
  scanf("%d",&ch);
  switch(ch)
 { case 1:printf("\n enter the element:");
	  scanf("%d",&dat);
          InsertF(dat);
	  break;
   case 2:printf("\n enter the element to be inserted at end of list:");
	  scanf("%d",&dat);
          InsertR(dat);
	  break;
  case 3:printf("\n enter the element to be inserted at any position:");

	  scanf("%d",&dat);
         printf("\nenter the position:"); 
         scanf("%d",&po); 
         InsertP(dat,po);
	  break;
  case 4: printf("\nthe link list is:");
          display();
          break; 
  
  case 5: printf("\nDeletion at Front taking place");
          deleteF();
           break;
  case 6: printf("\nDeletion at Front taking place");
          deleteR();
          break;
  case 7:  printf("\nDeletion at any position taking place");
           printf("\nenter the position at which you want to delete:");          
           scanf("%d",&po);
               
           deleteP(po);
           break;

   case 8 : exit(0);
            break;
  default:printf("\nthe wrong choice entered");
 }
}
}
       


