#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};

int main()
{
 struct node *head;
 head=malloc(sizeof(struct node));
 head->data=10;
 head->next=NULL;

 struct node *second;
 second=malloc(sizeof(struct node));
 second->data=15;
 second->next=NULL;
 head->next=second;

 struct node *third;
 third=malloc(sizeof(struct node));
 third->data=20;
 third->next=NULL;
 second->next=third;

 struct node *temp;
 temp=head;

 struct node *end;
 end=malloc(sizeof(struct node));
 end->data=30;
 end->next=NULL;

 while(temp->next!=NULL)
 {
 temp=temp->next;
 }
 temp->next=end;
 temp=head;

 while(temp!=NULL)
 {
 printf("%d ",temp->data);
 temp=temp->next;
 }

   return 0;
}