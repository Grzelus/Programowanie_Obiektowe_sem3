#include <iostream>
using namespace std;

struct VerboseObject {
	string name;
	VerboseObject(string name) : name(name) {
		cout << "Name: " << name << endl;
	}
	~VerboseObject(){
		cout << name << " object has been destroyed" << endl;
	}
};

int main(void) {
	// Z racji, iż obj1 jest w pamięci statycznej jest on outomatycznie usuwany gdy int main() skończy swoją pracę, oznacza to, że obj1 zostanie usunięty na samym końcu.
	VerboseObject obj1("Titanium");
	VerboseObject* obj2 = new VerboseObject("Iron");
	delete obj2;
	return 0;
}