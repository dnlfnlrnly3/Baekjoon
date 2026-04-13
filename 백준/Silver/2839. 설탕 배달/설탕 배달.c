#include <stdio.h>
int main(void){ 
	
	int N;
	int count = 0;
	
	scanf("%d", &N); //3 ≤ N ≤ 5000
	while (N >= 0){
		if(N % 5 == 0){
			count += N / 5;
			printf("%d",count);
			return 0;
		}
		N -= 3;
		count++;
	} 
	printf("-1");	
}