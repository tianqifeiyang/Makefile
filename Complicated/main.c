#include "stdio.h"
#include "foo.h"

extern void foo();
int main()
{
	foo();
	return 0;
}