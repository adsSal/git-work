#include <stdio.h>
int main() {
	int x, y;
	int sum;
	int sub;
	int times;
	int div;
	
	printf("enter 2 integers");
	scanf("%d %d", &x, &y);

	sum = x + y;
	printf("Sum is %d", sum);

	printf("enter 2 integers");
	scanf("%d %d", &x, &y);

	sub = x - y;
	printf("Sum is %d", sub);
	
	printf("enter 2 integers");
	scanf("%d %d", &x, &y);

	times = x * y;
	printf("Sum is %d", times);
	
}
