/*ʵ�ʲ������ݵķ�ΧӦ���� [-2^63, 2^63 - 1] */
#include <cstdio>

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		long long A, B, C, sum;
		scanf("%lld %lld %lld", &A, &B, &C);
		sum = A + B; //A��Bͬ��ʱ�����������������ø������������ �Ǹ���
		printf("Case #%d: ", i);
		if (A > 0 && B > 0 && sum < 0) { //�����  
			printf("true\n");
		} else if (A < 0 && B < 0 && sum >= 0) { //����� 
			printf("false\n");
		} else if (sum > C) {
			printf("true\n");
		} else {
			printf("false\n");
		}
	} 
	return 0;
}
