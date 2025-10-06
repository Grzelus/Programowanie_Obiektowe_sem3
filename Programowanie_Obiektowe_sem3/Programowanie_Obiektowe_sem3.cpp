#include <iostream>
using namespace std;

struct Point {
	double x;
	double y;
	// Construntor
	Point() {
		x = 0.0;
		y = 0.0;
	}
	// Construntor
	Point(double x, double y) {
		this->x = x;
		this->y = y;
	}
	// Display location
	void display_location() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
	// Add two points
	Point add(const Point& other) {
		return Point(x + other.x, y + other.y);
	}
};

int main(void) {
	Point p1 = Point(3.4, 6.7);
	Point p2(5.7, 4.7);
	Point p3 = p1.add(p2);
	p3.display_location();
	return 0;
}