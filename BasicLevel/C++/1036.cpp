#include <cstdio>
#include <cmath>

int main() {
	int N;//�����α߳�
	char C; //�ַ� 
	scanf("%d %c", &N, &C);
	int row = (int)round(N / 2.0); //���� 
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < N; j++) {
			if (i == 0 || i == row - 1 // ��һ�У����һ��
				|| j == 0 || j == N - 1) {//ÿ�е�ͷβ
				printf("%c", C); 
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
