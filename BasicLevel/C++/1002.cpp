#include <stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d", &A, &B);
	C = A * B;
	while (!(C % 10)) {//����λΪ0��ɾȥ
		C /= 10;
	}
	while (C) {
		printf("%d", C % 10);
		C /= 10;
	} 
} 
