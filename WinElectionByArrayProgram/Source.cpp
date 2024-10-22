#include <stdio.h>

#define CONSTANTVALUE 2
#define POLLRESULTVALUE 13


int main(void) {

	// Define pollResultArray 
	// square bracket - array bracket	
	// 1 - win election
	// 0 - loss election
	int pollResult[POLLRESULTVALUE] = {1,0,1,1,0,0,1,1,1,0,0,0,1};

	// New empty array - WinLossArray
	int winLossElection[CONSTANTVALUE] = {NULL};

	for (int i = 0; i < POLLRESULTVALUE; i++)
	{
		// array inside array
		winLossElection[pollResult[i]]++;		
	}

	
	// display results
	printf("%s%12s\n", "LossandWin" ,"Counting");

	// output the frequencies in a tabular format
	for (int i = 0; i < CONSTANTVALUE; i++) {
		printf("%6d%12d\n",i, winLossElection[i]);

	}
	return 0;




	

	




}