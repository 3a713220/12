#include<stdio.h>
#include<stdlib.h>
void show(int);
int main(void)
   {
	int x;
	printf("輸入一個數:");
	scanf("%d",&x);
	show(x);
   }
void show(int x)
   {
	int space;
	for(int o=x;o>0;o--)
	   {
		space=x-o;
		if(space>0)
		  {
			for(int p=0;p<space;p++)
			{
			printf(" ");
			}
		  }

		for(int l=0;l<o;l++)
		  {
			printf("%c",'*');
		  }
		printf("\n");
	   }
   }
