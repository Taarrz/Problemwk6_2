#include<stdio.h>
int main() {
	int n;
	int count = 0;
	scanf_s("%d",&n,sizeof(n));
	int i = 0, j = 0;
	int people[100][100];
	while (i<n) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				people[i][j] = 1;
				
			}
			else {
				people[i][j] = 0;
			}
		}
		i++;
	}
	i = 0, j = 0;
	while (i < n) {
		for (int j = 0; j < n; j++) {
				count = count + people[i][j];
		}
		i++;
	}
	printf("Handshake = %d", count);
	return 0;
}