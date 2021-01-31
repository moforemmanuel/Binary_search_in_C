#include <stdio.h>
#include <stdlib.h>

int selectionsort(int list[]);

int main(){
	int low,mid,up,i,item,n,list[10];
	
	printf("Enter number of numbers : \n");
	scanf("%d",&n);
	
	printf("Enter numbers is  : \n");
	for(i=0;i<n;i++)
	scanf("%d",&list[i]);
	
	printf("Enter item to be searched : \n");
	scanf("%d",&item);
	

	
	low=0; up=n-1; 
	
	while(low<=up&&item!=list[mid])
	{
		mid=(low+up)/2;
		if(item>list[mid])
		low=mid+1;
		
		if(item<list[mid])
		up=mid-1;
		
		if(item==list[mid])
		printf("%d found at position %d \n",item,mid+1);
		
		if(low>up)
		printf("%d not found in list \n",item);
	}
}



