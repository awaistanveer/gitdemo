#include <stdio.h>

void commit1()
{
	return;	
}

void br1() {
	printf("A function in new branch\n");	
}
int main()
{
	br1();
	printf("A branch merged.\n");
	return 0;
}