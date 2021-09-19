#include<stdio.h>
#include<iostream>
int main() {
	int a;
	scanf_s("%d",&a);
	bool b[10000] = {};
	if (a < 6) {
		printf("no");
		return 0;
	}
	b[6] = true;
	b[9] = true;
	b[20] = true;
	for (int i = 6; i <= a; i++) {
		if (b[i]) {
			printf("%d\n",i);
			b[i + 6] = true;
			b[i + 9] = true;
			b[i + 20] = true;
		}
	}
}