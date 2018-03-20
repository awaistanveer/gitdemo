#include <stdio.h>

void commit2() {
	printf("This is commit 2");
}

void commit1() {
	return;	
}

void br1() {
	printf("A function in new branch\n");	
}
int main() {
	br1();
	printf("A branch merged.\n");
	return 0;
}