#include<stdio.h>
#include<stdlib.h>
struct node
{
 struct node *prev;
 int data;
 struct node *next;
};

int main()
{
 struct node *head;
 head=malloc(sizeof(struct node));
 head->prev=NULL;
 head->data=5;
 head->next=NULL;

 struct node *second;
 second=malloc(sizeof(struct node));
 second->prev=head;
 second->data=10;
 second->next=NULL;
 head->next=second;

 struct node *third;
 third=malloc(sizeof(struct node));
 third->prev=second;
 third->data=15;
 third->next=NULL;
 second->next=third;

 struct node *temp;
 temp=head;

 struct node *end;
 end=malloc(sizeof(struct node));
 end->data=40;
 end->next=NULL;
 end->prev=third;
 third->next=end;

 temp=head;

 while(temp!=NULL)
 {
 printf("%d ",temp->data);
 temp=temp->next;

 }
  return 0;
}