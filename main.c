/*
	Made by Maddie. 
	Enter the high, low, open and close price of the day.
	Whether you should or should not buy/ sell / do nothing will be returned.
	Future functions (May include but have to be decided if I know how to write the program, haha):
		Can read the data from the website so you don't have to enter them by yourself
		Can recorded history data and claculate the return rate
		To be continued...
*/
#include <stdio.h>
#define MONTHLY 20
#define WEEKLY 5
int main() {
	float low[MONTHLY], high[MONTHLY], open[MONTHLY], close[MONTHLY];
	for(int i = 0;i < MONTHLY; i++)
		scanf("%f", &low[0], &high[0], &open[0], &close[0]);
	/*	Waiting to be written.
		Till I read the books about how to trade, haha
	*/
	if (1) {
		printf("BUY IT\n");
	}
	else if (0) {
		printf("SELL IT\n");
	}
	else {
		printf("WAIT FOT IT\n");
	}

}