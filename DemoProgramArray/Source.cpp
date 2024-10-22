#include <stdio.h>

int main(void)
{
	// Method no 1 
	// hvordan du initiailze array variabler 

	//int ages[5];

	int ages[] = {22,33,55,78,78,89,100,75,74,746,84646};
	float ages1[] = { 22.43 ,52.43 , 65.43 , 67.33, 45 };
	char agesString[] =  "The string is a string i snakker om udfordringer og lab opgaver. Jeg har lagt kode (Answer key) i Moodle under lektion ugeplan 41. Jeg viser kode og fortæller dig om , har du forstået det (alle ting)";
	char val =  agesString[10];

	// asssign values int memory

	// Data modification 

	ages[0] = 44; 
	
	ages[2] = 65;
	ages[3] = 100;

	int sizeOfMemory = sizeof(ages);
	
	
	// printing values
	for (int i = 0; i < 11; i++)
	{
		printf("The values in arrays : ages[%d] = : %d\n", i, ages[i]);
	}



}