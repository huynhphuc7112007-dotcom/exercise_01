#include <stdio.h>
void AB(int a, int *b)
{
	if(a>*b) *b = *b + 6;
	if(*b>a) a = *b%
	printf("a= %d b= %d\n",a,*b) ;
}
void KyCuc(int *x, int *y)
{
	int t;
	t = *x;
	*y = *y + 2;
	if(t != *x) printf("\n Ky cuc!");
}
int main()
{	int x = 8;
	int y = 5;
	AB(x,&y);
	printf("x= %d y= %d\n", x, y) ;
	x=y=3;
	KyCuc(&x, &x) ;
	printf("x= %d y= %d\n", x, y) ;
	return 0;
}