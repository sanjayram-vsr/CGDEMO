#include<stdio.h>
#include<conio.h>

void main(){
	int x,y,ans;
	printf("\tMultiplication Calculator");
	printf("\n\nEnter any two numbers:");
	scanf("%d %d",&x,&y);
	ans=x*y;
	system("cls");
	printf("Answer is:%2d",ans);
	getch();
	
}
