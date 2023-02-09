#include<stdio.h>
void function(int min);
int main()
{
	int n;
	printf("Enter the input:");
	scanf("%d",&n);
	function(n);
	return 0;
}
void function(int n)
{
	int count=0,i=1,s=1;
	count++;
	count++;
	while(s<=n)
	{
		count++;
		i++;
		count++;
		s=s+i;
		count++;
		
	}
	count++;
	printf("%d",count);
	
}
