#include <stdio.h> 
#include <stdlib.h>

void Prt(int M, double i) {
	if (M < i) {
		printf(" Cong");
	} else if (M == i) {
		printf(" Ping");
	} else {
		printf(" Gai");
	}
}

int main() {
	int M, X, Y, A, B; //��ס�������ֵΪA��B
	double C; //���������ֵΪC
	scanf("%d %d %d", &M, &X, &Y);
	for (A = 99; A >= 10; A--) {//�׵�����ֵΪ2λ����������Ѱ�ҷ��ϵ����� 
		B = A % 10 * 10 + A / 10;
		if (abs(A-B) * 1.0 / X == B * 1.0 / Y) {// �ҵ���������������ֵ 
			C = B * 1.0 / Y;
			printf("%d", A);
			Prt(M, A);
			Prt(M, B);
			Prt(M, C);
			return 0;
		}
	}
	printf("No Solution"); 
	return 0;
}
