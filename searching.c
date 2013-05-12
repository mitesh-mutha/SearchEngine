#include <stdio.h>

#define MAX 10000

int main()
{
	int n, i, searchElement;
	int a[MAX];
	
	scanf("%d",&n);

	if ( n >= MAX )
	{
		return 0;
	}

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

			return 0;
		}
	}

	// Element not found if the control reaches here

	return 0;
}