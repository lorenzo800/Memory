#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


void mescola(char  a[],int d){        //funzione scambia array
	
	
	for(int i=0; i<d;i++){
		
	int z=rand()%d;
		
		char o=a[i];
		a[i]=a[z];
		a[z]=o;
	
		
		
	}
	
	
}




int main(int argc, char** argv) {
	
	int l,x;
	
	
	
	
	srand(time(NULL));
	int cartella[7][7];
	int d=rand()%4+4;
	cout<<"GIOCO DEL MEMORY "<<endl;
		cout<<"CARTELLONE GENERATO CASUALMENTE: "<<endl;
		cout<<endl;
	for(int i=0; i<d;i++){
			
			for(int j=0; j<d;j++){        //ciclo genera tbella di gioco di grandezza con lettere casuali
			char l=(rand()%26+65);
			cout<<l;
			cout<<" ";
				
			}
		
		cout<<endl;
			
	}
	
	
	
	char lt[52]={'A','A','B','B','C','C','D','D','E','E','F','F','G','G','H','H','I','I', 'J','J', 'K','K', 'L','L', 'M','M', 'N','N', 'O','O','P','P', 'Q','Q','R','R', 'S','S','T','T','U','U','V','V','W','W','X','X','Y','Y','Z','Z'};
	
	cout<<endl;
	
	 for(int i=0; i<d; i++ ){
	 	cout<<lt[i];
	 }
	
  mescola(lt[],52);     
  
	return 0;

}