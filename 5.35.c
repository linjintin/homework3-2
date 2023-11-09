#include <stdio.h>
#include <stdlib.h>
unsigned long long fib(unsigned int n);
int main(void) {
	int n;
	scanf("%d", &n);
	printf("%lld ", fib(n));
}
unsigned long long fib(unsigned int n) {
	int a = 0, b = 1, i = 1, s;
	if (n == 1) {
		return 0;
	}
	else if (n == 2 || n == 3) {
		return 1;
	}
	else {
		for (i = 1; i < n - 1; i++) {
			s = a + b;
			a = b;
			b = s;
		}
		return s;
	}
}

