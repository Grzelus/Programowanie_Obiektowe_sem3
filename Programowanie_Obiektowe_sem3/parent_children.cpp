//#include <iostream>
//using namespace std;
//
//class Creature {
//private:
//	string name;
//public:
//	Creature(string name) : name(name) {}
//	virtual void make_sound() {
//		cout << "..." << endl;
//	}
//	virtual void display_props() {
//		cout << "name: " << name << endl;
//	}
//	string get_name() {
//		return name;
//	}
//};
//
//class Cat : public Creature {
//private:
//	int age;
//public:
//	// Construntor
//	Cat(string name, int age) : Creature(name), age(age) {}
//
//	virtual void make_sound() override {
//		cout << "Meoooow" << endl;
//	}
//	void display_props() override {
//		cout << "name: " << get_name() << ", age: " << age << endl;
//	}
//};
//
//class Tiger : public Cat {
//public:
//	// Constructor
//	Tiger(string name, int age) : Cat(name, age) {}
//	void make_sound() override {
//		cout << "Raawr" << endl;
//	}
//};
//
//int main(void) {
//	Creature* worm = new Creature("Poppy");
//	Tiger* Tom = new Tiger("Tom", 16);
//	Cat* John = new Cat("John", 4);
//	worm->display_props();
//	worm->make_sound();
//	John->display_props();
//	John->make_sound();
//	Tom->display_props();
//	Tom->make_sound();
//	delete worm;
//	delete John;
//	delete Tom;
//	return 0;
//}