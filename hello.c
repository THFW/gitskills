#include <stdio.h>


int main()
{
	int *p;
	int a[10];
	int i;
	p=&a[0];
	for(i=0;i<10;i++)
	{
	//	a[i]=i;
		*(p+i)=i;
	}

	for(i=0;i<10;i++)
	{
		//printf("%d\n",a[i]);
		printf("%d\n",*(p+i));
	}

	return 0;	
}
