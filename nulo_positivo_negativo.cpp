#include<iostream>

using namespace std;

int main() {
	
	int N=0;
	
	cout << "Digite um numero: ";
	cin >> N;
	
	if (N == 0){
		
		cout << "numero nulo";
	}
	
	if (N > 0){
		
		cout << "numero positivo";
	}
	
	if (N < 0){
		
		cout << "numero negativo";
	}
	
	return 0;
}