#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		unsigned int a, b;
		unsigned int len = 0;
		int score = 1;
		int count = 1;
		int total = 0;
        int flag = 0;
		scanf("%d %d", &a, &b);
		len = b - a;
		while (1) {
			for (int n = 0; n < 2; n++) {
				total += count;
				if (total >= len) {
					flag = 1;
                    break;
				}
				else {
					score++;
				}
			}
            if(flag) break;
			count++;
		}
	    if(flag) printf("%lld\n", score);



	}
}
