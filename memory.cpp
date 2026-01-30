#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;



int main(int argc, char** argv) {
	
	int l,x;
	
	
	
	
	srand(time(NULL));
	int cartella =rand()%11+4;
	cout<<"inserire dimensione cartella "<<cartella<<endl;
	
	for(int i=0; i<cartella;i++){
			
			for(int j=0; j<cartella;j++){
			char l=(rand()%26+65);
			cout<<l;
			
				
			}
			
			
			
		cout<<endl;
			
	}
	
	

	
	
	
	
	
	return 0;

}