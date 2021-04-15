#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "analysis.h"

#define NROWS 100
#define NCOLS 100

void parserow(char *mybuffer, int mncols);

void showdata(float *mydata, int mnrows, int mncols);

int main(){
	float fdata[NROWS][NCOLS];
	int i, j;
	char *buf1="1, 10.2, 3, 44, 7";
//	for(i=0; i<NROWS; i++){
//		for(j=0; j<NCOLS; j++)
//			fdata[i][j] = i*NCOLS+j;
//	}
//	showdata((float *)&fdata, 3, 4);
	parserow(buf1, 4);
	return 0;
}
