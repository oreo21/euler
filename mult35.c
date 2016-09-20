#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 1, j = 1, sum = 0;
	while (3*i < 1000){
		sum += 3*i;
		i++;
	}
	while (5*j < 1000){
		if ((5*j) % 3 != 0) sum += 5*j;
		j++;
	}
	printf("sum of multiples of 3 or 5 < 1000: %d \n", sum);
}

	