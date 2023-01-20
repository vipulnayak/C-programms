#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	int ph;
	char name[20];
	char usn[10];
	char branch[20];
	struct node*link;
};
struct node*front=0;
struct node*rear=0;
void enqueue(int ph,char name[20],char usn[10],char branch[20])
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->ph=ph;
	strcpy(newnode->name,name);
	strcpy(newnode->usn,usn);
	strcpy(newnode->branch,branch);
	newnode->link=0;
	if(front==0&&rear==0)
{
	front=rear=newnode;

}
else
{
	rear->link=newnode;
	rear=newnode;
}
}
void display()
{
	struct node *temp;
	temp=front;
	if(front==0&&rear==0)
{
	printf("Underflow");
}
while(temp!=NULL)
{
printf("\n Name=%s\n usn=%s\n Branch=%s\n Phone=%d",temp->name,temp->usn,temp->branch,temp->ph);
temp=temp->link;
}
}
void dequeue()
{
	struct node *temp;
	temp=front;
	if(front==0)
{
	printf("Underflow");
}
while(temp!=NULL)
{
	printf("\n Name=%s\n usn=%s\n Branch=%s\n Phone=%d",temp->name,temp->usn,temp->branch,temp->ph);
	temp=temp->link;
	front=front->link;
	free(temp);
}
}


void main()
{
	int n,choice,ph;
	char name[20],usn[10],branch[20];
	while(1)
	{
	printf("\n Menu\n 1:Enqueue\n 2:Display\n 3:Dequeue\n 4:exit");
	printf(" Enter your choice :");
	scanf("%d",&choice);
switch(choice)
{
	case 1:printf(" Enter the number of nodes:");
	scanf("%d",&n);#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	int ph;
	char name[20];
	char usn[10];
	char branch[20];
	struct node*link;
};
struct node*front=0;
struct node*rear=0;
void enqueue(int ph,char name[20],char usn[10],char branch[20])
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->ph=ph;
	strcpy(newnode->name,name);
	strcpy(newnode->usn,usn);
	strcpy(newnode->branch,branch);
	newnode->link=0;
	if(front==0&&rear==0)
{
	front=rear=newnode;

}
else
{
	rear->link=newnode;
	rear=newnode;
}
}
void display()
{
	struct node *temp;
	temp=front;
	if(front==0&&rear==0)
{
	printf("Underflow");
}
while(temp!=NULL)
{
printf("\n Name=%s\n usn=%s\n Branch=%s\n Phone=%d",temp->name,temp->usn,temp->branch,temp->ph);
temp=temp->link;
}
}
void dequeue()
{
	struct node *temp;
	temp=front;
	if(front==0)
{
	printf("Underflow");
}
while(temp!=NULL)
{
	printf("\n Name=%s\n usn=%s\n Branch=%s\n Phone=%d",temp->name,temp->usn,temp->branch,temp->ph);
	temp=temp->link;
	front=front->link;
	free(temp);
}
}


void main()
{
	int n,choice,ph;
	char name[20],usn[10],branch[20];
	while(1)
	{
	printf("\n Menu\n 1:Enqueue\n 2:Display\n 3:Dequeue\n 4:exit");
	printf(" Enter your choice :");
	scanf("%d",&choice);
switch(choice)
{
	case 1:printf(" Enter the number of nodes:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
{
	printf("\n Enter the phone no:");
	scanf("%d",&ph);
	printf("\n Enter the name");
	scanf("%s",name);
	printf("\n Enter the usn");
	scanf("%s",usn);
	printf("\n Enter the branch");
	scanf("%s",branch);
	enqueue(ph,name,usn,branch);
}
break;
case 2:display();
break;
case 3:dequeue();
break;
case 4:exit(1);
}
}
}
	

	
	for(int i=0;i<n;i++)
{
	printf("\n Enter the phone no:");
	scanf("%d",&ph);
	printf("\n Enter the name");
	scanf("%s",name);
	printf("\n Enter the usn");
	scanf("%s",usn);
	printf("\n Enter the branch");
	scanf("%s",branch);
	enqueue(ph,name,usn,branch);
}
break;
case 2:display();
break;
case 3:dequeue();
break;
case 4:exit(1);
}
}
}
	

	
