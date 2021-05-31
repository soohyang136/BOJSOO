#include <stdio.h>
int prime[10000];
void primenumber(int x){
	int i , j, k, a, flag;
	for(k = 0; k < x; k++){
		scanf("%d", &a);
		for(i = 2; i <= a; i++){
			prime[i] = i;
		}
		for(i = 2; i <= a; i++){
			if(prime[i] == 0) continue;
			for(j = i + i;j <= a; j += i){
				prime[j] = 0;
			}
		}
		for (int i = 2; i <= a; i++) {
			flag = 0;
			if (prime[i] >= a / 2) {
				for (int j = 2; j <= a; j++) {
					if (a - prime[i] == prime[j]) {
						flag = 1;
						printf("%d ", a - prime[i]);
						printf("%d\n", prime[i]);
						break;
					}
					else if (prime[j] > a - prime[i]) break;
				}
			}
			if(flag) break;
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	primenumber(t);
}
