#include<iostream>

float soma (float n1, float n2) {
	return n1 + n2;
}

int main() {
	
	float n1, n2;

    std::cout << "digite o primeiro numero: \n";
	std::cin >> n1;
	std::cout << "digite o segundo numero: \n";
	std::cin >> n2;
	
		
	std::cout << "soma: " << soma(n1, n2) << "\n";
	
	
	return 0;
}