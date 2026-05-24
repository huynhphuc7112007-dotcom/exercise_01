#include <stdio.h>
int main()
{
	int A[] = {2, 3, 5, 7, 11, 13, 17}, *p, i;
	p = &A[4];
	printf("\n1. %d", *(++p)); //
	printf("\n2. %d", (p - A));
	printf("\n3. %d", *(A + A[0]));
	printf("\n4. ");
	for (int i = 0; i < 3; i++)
		printf("\t%d ", *(A + i));
	return 0;
}
