#include<stdio.h>



int func(int n,int k,int arr[],int num)

{

	int i;

	

	if(n==k)

	{

		printf("%d \n",n);

		return;

	}

	

	for(i=1;i<=n-k;i++)

	{

		printf("%d ",k);

		func(n-k,i);	

	}

}



int main()

{

	int n,i;

	

	scanf("%d",&n);

	

	for(i=1;i<=1;i++)

	{

		func(n,1);

	}

}
