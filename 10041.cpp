#include<iostream>
#include<algorithm>

int main(){
	int numCas, numFam, casa; 
	long suma;

	std::cin >> numCas;
	for(int i = 0; i < numCas; i++){
		std::cin >> numFam;	
		int * casas =(int*) malloc(numFam * sizeof(int));
		suma = 0;

		for(int j = 0; j<numFam; j++){
			std::cin >> casas[j];
		}
		std::sort(casas,casas+numFam);
		
		casa = casas[(numFam-1)/2];
		for(int j=0; j < numFam; j++){
			if(casas[j]>casa){
				suma+=casas[j]-casa;
			} else {
				suma+=casa-casas[j];
			}
		}

		std::cout << suma << "\n";
	}
}
