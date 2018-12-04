#include <stdio.h>

int main() {


	int num = 10000;
	int rev = 0;
	int temp = num;
	
	while ((num*4) != (rev)) {
		num = num++;
		temp = num;
		rev = 0;
		while (temp != 0) {

			rev = rev * 10;
			rev = rev + temp % 10;
			temp = temp / 10;
		}
		printf("The number is = %d\n", num);
		printf("Number by 4 = %d\n", 4*num);
		printf("reverse numer  is = %d\n", rev);
		printf("\n");
	}
	printf("The number is = %d\n", num);
	return 0;
}
