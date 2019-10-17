#include<stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node *next;
};
int main()
{
	struct node *temp1,*temp2;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp2=(struct node*)malloc(sizeof(struct node));
	
	temp1->info=2;
	temp1->next=temp2;
	printf("Data = %d Present Address = %u Next Address = %u",temp1->info,temp1,temp1->next);
	
	temp2->info=3;
	temp2->next=NULL;
	printf("\nData = %d Present Address = %u Next Address = %u",temp2->info,temp2,temp2->next);
}
