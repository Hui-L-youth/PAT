#include <cstdio>
#include <cstring>

int main() {
    char str[81];
    while(scanf("%s", str) != EOF) {
    	int N = strlen(str);
    	int n1 = (N + 2) / 3, n2 = N + 2 - n1 * 2; //����n1��n2��n3��ӽ�����n1��n3 < n2ʱ�����ֵ 
    	
    	// ����һ��ͨ������ֱ����� 
    	for(int i = 0; i < n1 - 1; i++) { //������� 
    		printf("%c", str[i]);
    		for(int j = 1; j < n2 - 1; j++)
    			printf(" ");
			printf("%c\n", str[N- i - 1]);
		}
		for(int i = n1 - 1; i < n1 - 1 + n2; i++)
			printf("%c", str[i]);
		printf("\n");
		
		/** 
		//�������������ά���飬���������������
		char u[n1][n2];
    	memset(u, ' ', sizeof(u));
    	for(int i = 0; i < n1; i++)
    		u[i][0] = str[index++];
		for(int i = 1; i < n2; i++)
			u[n1 - 1][i] = str[index++];
		for(int i = n1 - 2; i >= 0; i--)
			u[i][n2 - 1] = str[index++];
    	for(int i = 0; i < n1; i++) {//�������
    		for(int j = 0; j < n2; j++)
    			printf("%c", u[i][j]);
    		printf("\n");
		} 
		*/ 
	}
    return 0;
}
