#include <stdio.h>
#include <stdlib.h>
int pow(int a, int b);
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", pow(a, b));
}
int pow(int a, int b) {
	if (b == 0)
		return 1;
	else
		return a * pow(a, b - 1);
}
