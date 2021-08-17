#include<iostream>

int main() {
	
	int n=0;
	
	std::cout << "Digite um numero: ";
	std::cin >> n;
	
	if (n % 2 ==0) {
		std::cout<<"Esse numero e par";
	} else {
		
		std::cout<<"Esse numero e impar";
	}
	
	return 0;
}