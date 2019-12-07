#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// banlnot sayýcý
void divade(int num,int *num1, int *num2, int *num3, int *num4, int *num5) {

	*num1 = num/100;
	*num2 = num % 100 / 50;
	*num3 = num % 50 / 20;
	*num4 = num % 20 / 10;
	*num5 = num % 10 / 5;

}






int main() {

	int stat,num,num1,num2,num3,num4,num5;
	FILE* money;
	money = fopen("Amount.txt", "r");
	if (money == 0)
		printf("i didnt even hear that files");
	else {
		stat = fscanf(money, "%d", &num);
		while (stat != EOF) {
			if (num % 5 != 0) {
				printf("it isnt divide by 5");
			}
			else
				divade(num, &num1, &num2, &num3, &num4, &num5);
		
			if (num1 != 0)
				printf("%d-hundert||", num1);
			if (num2 != 0)
				printf("%d-fifty||", num2);
			if (num3 != 0)
				printf("%d-twenty||", num3);
			if (num4 != 0)
				printf("%d-ten||", num4);
			if (num5 != 0)
				printf("%d-five\n", num5);
			stat = fscanf(money, "%d", &num);

		}
		
		fclose(money);

	}
	return 0;
}