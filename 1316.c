#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char arr[101];
	int count = 0;
	int len;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int flag = 1;
		scanf("%s", arr);
		len = strlen(arr);
		int arr1[200] = { 0, };
		for (int j = 0; j < len; j++) {
			if (arr[j + 1] == arr[j]) {
				continue;
			}
			if (arr1[arr[j]] == 0) {
				arr1[arr[j]] ++;
			}
			else {
				flag = 0;
				break;
			}
		}
		if (flag) count++;
	}
	printf("%d", count);
}
