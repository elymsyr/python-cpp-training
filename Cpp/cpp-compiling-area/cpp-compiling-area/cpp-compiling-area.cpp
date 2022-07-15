#include <iostream >
using namespace std;

void f(unsigned char c) { cout << c << endl; }

void f(char c) { cout << c << endl; }

int main() {
	f('c');
	//f(97); // which f() is called?
	f(char(97));
	return 0;
}