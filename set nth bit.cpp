#include<stdio.h>
int main()
{
	int n,x,r;
	scanf("%d",&x);//input integer from user
	scanf("%d",&n);//to set the nth bit
	x=(1<<(n-1))| x;//
	printf("Number after setting %d bit is:%d",n,x);
	return 0;
}
