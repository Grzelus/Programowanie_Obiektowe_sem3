#include <iostream>
#include <math.h>

struct BinomialSolver {
	double a, b, c;
	double delta;
	double x1 = 0;
	double x2 = 0;

	void claculate_delta() {
		delta = b * b - 4 * a * c;
	}

	void find_solutions() {
		if (delta > 0) {
			x1 = (-b - sqrt(delta)) / 2;
			x2 = (-b + sqrt(delta)) / 2;
		}
		else if (delta == 0) {
			x1 = -b / 2;
		}
	};
	// Constructor
	BinomialSolver(double a, double b, double c) : a(a), b(b), c(c) {
		this->claculate_delta();
		this->find_solutions();
	}
	void display_solusions() {
		if (delta > 0) {
			std::cout << x1 << ", " << x2 << std::endl;
		}
		else if (delta == 0) {
			std::cout << x1 << std::endl;
		}
		else {
			std::cout << "There's no solusions" << std::endl;
		}
	}
	void display_larger_solution() {
		if (delta < 0) {
			std::cout << "There's no solusions" <<std::endl;
		}
		else if (delta == 0) {
			std::cout << "There's only one solution: " << x1 << std::endl;
		}
		else {
			if (x1 < x2) {
				std::cout << x2 << std::endl;
			}
			else {
				std::cout << x1 << std::endl;
			}
		}
	}

};

int main() {
	BinomialSolver first(1, -4, -5);
	BinomialSolver second(1, -6, 9);
	BinomialSolver third(1, 0, 4);
	first.display_solusions();
	first.display_larger_solution();
	second.display_solusions();
	second.display_larger_solution();
	third.display_solusions();
	third.display_larger_solution();
	return 0;
}