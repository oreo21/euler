#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	long chainLen = 0, startNum = 0, num;
	for (i = 1; i <= 1000000; i++){
		int len = 1;
		num = i;
		while (num != 1){
			if ((num % 2) == 0) {num = num/2;}
			else {num = num * 3 + 1;}
			len++;
		}
		if (len > chainLen){
			chainLen = len;
			startNum = i;
		}
	}
	printf("The starting number %ld creates the largest Collatz chain, at %ld. \n", startNum, chainLen);
}