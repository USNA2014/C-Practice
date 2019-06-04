#include <stdio.h>

int main(int argc, char* argv){
	int lines= 5;
	for (int i=1; i<=lines; i++){
		for(int j=5; j>=i; j--){
			printf(" ");
		}
		for(int k=1; k<=i; k++){
			printf("#");
		}
		printf("\n");
	}
	
}

