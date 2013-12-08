#include <iostream>

using namespace std;

class Greeter {
public: 
	Greeter() {name = "Unnamed";}
	Greeter(string n) {name = n;} 
	
	void hello(string who = "World") {
			cout << "Hello " << who << ". My name is " << name << endl;
	}
private: 
	string name;
};
	

int main () {
	
	Greeter my_greeter("Aggelos");
	my_greeter.hello();
	
	return 0;
	
	
}
