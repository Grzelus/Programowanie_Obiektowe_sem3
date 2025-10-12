//#include <iostream>
//#include <vector>
//#include <math.h>
//
//struct Complex {
//	double rel;
//	double img;
//	double modulus;
//	//Konstructor
//	Complex(double r, double i) : rel(r), img(i) {
//		this->modulus = this->compute_modulus();
//	}
//
//	// Metody
//	Complex operator+ (const Complex& number){
//		return Complex(rel + number.rel, img + number.img);
//	}
//	Complex operator* (const Complex& number) {
//		return Complex(rel * number.rel - img * number.img, rel * number.img + img * number.rel);
//	}
//	double compute_modulus() {
//		return (sqrt(rel * rel + img * img));
//	}
//	void display_props() {
//		std::cout << rel << " + " << img << "i\nmodulus: "<< modulus << std::endl;
//	}
//};
//
//int main(void) {
//	//Zmienne do przetrzymania danych użytkownika
//	double r, i;
//	std::vector<Complex> numbers;
//
//	while (std::cin >> r >> i) {
//		numbers.emplace_back(r, i);
//	}
//	
//	// Suma i Iloczyn liczb zespolonych
//	Complex sum(0, 0);
//	Complex product(1, 0);
//	double best_modulus = numbers[0].modulus;
//
//
//	for (const auto& complex : numbers) {
//		sum =sum + complex;
//		product = product * complex;
//
//		if (complex.modulus > best_modulus) {
//			best_modulus = complex.modulus;
//		}
//	}
//	sum.display_props();
//	product.display_props();
//	std::cout << best_modulus << std::endl;
//
//
//	return 0;
//}