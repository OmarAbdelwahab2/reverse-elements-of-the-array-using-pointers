#include<stdio.h>
void main(void)
{
	int arr[5],* p;
	printf("enter the elements ");
	for (p = arr; p <= arr + 4; p++)
	{
		scanf_s("%d",p);
	}
	printf("\n");
	for (p = arr+4; p >= arr ; p--)
	{
		printf("%d",*p);
	}
}