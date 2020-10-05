#include <stdio.h>

int main (){
	char C;
	int N, i;
	
	scanf("%c",&C);
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		printf("%c",C);
	}
	printf("\n");
	
	return 0;
}
