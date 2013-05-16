#include <stdio.h>
#include <stdlib.h>
//#define MAX 10000

int main()
{
	int n, i, searchElement;
	int *a;

	scanf("%d",&n);
  a = (int *)malloc(n*sizeof(int));
  /*
	if ( n >= MAX )
	{
		return 0;
	}
  */

	for ( i = 0; i < n; i++ )
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&searchElement);
	for ( i = 0; i < n; i++ )
	{
		if ( a[i] == searchElement )
		{
			//Something needs to be done here
      printf("Element found at position %d",i+1);
			return 0;
		}
	}
  printf("Element not found\n");
	// Element not found if the control reaches here
	return 0;
}
