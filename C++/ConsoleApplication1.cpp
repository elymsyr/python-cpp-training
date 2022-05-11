/*
#include <iostream>
using namespace std;

class Nokta{
public:
	Nokta() {
		cout << "Parametresiz kurucu calisti" << endl;
		x = 0;
		y = 0;
	}
	int x, y;
	void degerAta(int, int);
	void ekranaYaz();
	bool baslangictaMi();
};

void Nokta::degerAta(int x1, int y1) {
	x = x1;
	y = y1;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi() {
	if (x == 0 && y == 0)
		return true;
	else
		return false;
	// If else yerine direkt if içindeki x==0&&y==0 fonksiyonu -- return x==0&&y==0 -- şeklinde yapılabilir.
}

int main(){
	Nokta n1;
	Nokta n2;
	Nokta* n3;
	n3 = &n2;
	Nokta* n4;
	n4 = new Nokta();
	Nokta array_nokta[10];
	//Nokta* pArray;
	//pArray = new Nokta[10];


	n1.degerAta(2, 7);
	cout << n1.x << "," << n1.y << endl;
	n1.ekranaYaz();
	n2.degerAta(10, 5);
	n2.ekranaYaz();
	int a, b;
	cout << "n1 -> x ve y icin iki deger giriniz..." << endl;
	cin >> a >> b;
	n1.degerAta(a, b);

	if (n1.baslangictaMi()) {
		cout << "n1 baslangic noktasinda." << endl;
	}
	else
		cout << "n1 baslangic noktasinda degil." << endl;

	if (n2.baslangictaMi()) {
		cout << "n2 baslangic noktasinda." << endl;
	}
	else
		cout << "n2 baslangic noktasinda degil." << endl;

	cout << "n3 pointer ile alinan degerler: ";
	n3->ekranaYaz();

	n4->degerAta(100, 200);
	n4->ekranaYaz();

	cout << "__________________________________" << endl << endl;

	for (int i = 0; i < 10; i++) {

		array_nokta[i].degerAta(i, i + 2);
		//(pArray + sizeof(Nokta) * i)->degerAta(i + 5, i + 8);
	}
	for (int i = 0; i < 10; i++) {
		array_nokta[i].ekranaYaz();
		//(pArray + sizeof(Nokta) * i)->ekranaYaz();
	}

	return 0;
} 
*/

/*
#include <iostream>
using namespace std;

namespace programci1 {
	int x = 15;

	void Boo() {
		int x = 7;
		cout << x << endl;
	}
}

namespace programci2 {
	int x = 20;

	void Foo() {
		int x = 5;
		cout << x << endl;
	}
}

int main()
{
	int x = 10;
	cout << x << endl;
	cout << programci1::x << endl;
	cout << programci2::x << endl;
}
*/

/*
#include <iostream>
using namespace std;

class Nokta {
private:
	int x;
//protected:
public:
	int y;
	void degerAta(int, int);
	void ekranaYaz();
	bool baslangictaMi();
};

void Nokta::degerAta(int x1, int y1) {
	x = x1;
	y = y1;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi() {
	if (x == 0 && y == 0)
		return true;
	else
		return false;
	// If else yerine direkt if içindeki x==0&&y==0 fonksiyonu -- return x==0&&y==0 -- şeklinde yapılabilir.
}

int main() {

	Nokta n1;
	//n1.x = 5;
	n1.y = 7;
	//cout << n1.x << endl;
	cout << n1.y << endl;


	return 0;

}
*/

/*
#include <iostream>
using namespace std;

class Nokta {

private:

	int x;
	int y;

public:

	int getX();
	int getY();

	void setX(int);
	void setY(int);
};

int Nokta::getX() {
	return x;
}

int Nokta::getY() {
	return y;
}

void Nokta::setX(int x2) {
	x = x2;
}

void Nokta::setY(int y2) {
	if (y2 > 5) {
		y = 5;
	}
	else if (y2 == 5) {
		y = 0;
	}
	else
		y = y2;
}

int main() {

	Nokta n1;
	n1.setX(10);
	int a;
	cin >> a;
	n1.setY(a);
	cout << n1.getX() << " " << n1.getY() << endl;
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

class B;

class A {
private:
	int x;
public:
	int getX();
	//void setX(int);
	friend void faall(A&);
	void setY(B&, int);
};

class B {
private:
	int y;
public:
	int getY();
	//void setY(int);
	friend class A;
};

int A::getX() { return x; }
//void A::setX(int x1) { x = x1; }
void A::setY(B& f, int g) { f.y = g; }

void faall(A& a) { a.x = 0; } // A sınıfının üyesi değil !!

int B::getY() { return y; }
//void B::setY(int y1) { y = y1; }


int main()
{
	A n;
	//n.setX(5);
	//cout << n.getX() << endl;
	faall(n);
	cout << n.getX() << endl;

	B b;
	//b.setY(50);
	//cout << b.getY() << endl;
	n.setY(b, 20);
	cout << b.getY() << endl;


	return 0;
}
*/

/*
#include <iostream>
using namespace std;

class B;

class A {
private:
	int x;
public:
	int getX();
	void setX(int);
	friend ostream& operator << (ostream&, A&);
};


int A::getX() { return x; }
void A::setX(int x1) { x = x1; }
ostream& operator << (ostream& o, A& a) {
	o << "A sinifindaki x: " << a.x;
	return o;
}

int main() {

	A a;
	a.setX(5);
	cout << a;

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Nokta {
private:
	int x;
	int y;
public:
	int getX();
	int getY();

	void setX(int);
	void setY(int);

	void ekranaYaz();
	
	bool baslangictaMi();
};

int Nokta::getX() {
	return x;
}

int Nokta::getY() {
	return y;
}

void Nokta::setX(int x){
	this->x = x;
	// Sınıftaki nesneyi göstermek için özel tanımlı bir pointer !!!
}

void Nokta::setY(int y1) {
	if (y1 > 5)
		y = y1;
	else
		y = 2;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi() {
	return (x == 0 && y == 0);
}

int main() {

	Nokta n1;
	n1.setX(10);
	cout << n1.getX() << endl;

	return 0;
}
*/


//constructer

/*
#include <iostream>
using namespace std;

class Nokta {

private:
	int x;
	int y;
public:

	Nokta();
	Nokta(int, int);

	int getX();
	int getY();

	void setX(int);
	void setY(int);

	void ekranaYaz();

	bool baslangictaMi();
};

Nokta::Nokta() {
	x = 2;
	y = 5;
	cout << "parametresiz" << endl;
}

Nokta::Nokta(int x, int y = 8) { // x için de varsıyaln bir değer alırsan overload ambiguous hatası alırsın çünkü iki tane parametresiz func olur !!!
 	this->x = x;                 // ama parametresiz Nokta fonksiyonunu silip x için de bir varsayılan değer atayabilirsin.   
	this->y = y;
	cout << "parametreli" << endl;
}
//function overload

int Nokta::getX() {
	return x;
}

int Nokta::getY() {
	return y;
}

void Nokta::setX(int x) {
	this->x = x;
	// Sınıftaki nesneyi göstermek için özel tanımlı bir pointer !!!
}

void Nokta::setY(int y1) {
	if (y1 > 5)
		y = y1;
	else
		y = 2;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi() {
	return (x == 0 && y == 0);
}

int main() {

	Nokta n1;
	cout << n1.getX() << " " << n1.getY() << endl;
	Nokta n2(5); // 5, 10 dersen y 5 olur. y için  bir şey yazmazsan 8 kalır.  ( ,5) diyemezsin.
	cout << n2.getX() << " " << n2.getY() << endl;
	Nokta n3(3, 6);
	cout << n3.getX() << " " << n3.getY() << endl;
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Nokta {

private:
	int x;
	int y;

public:
	static int i;
	Nokta();
	Nokta(int, int);

	int getX();
	int getY();

	void setX(int);
	void setY(int);
	int geti();

	void ekranaYaz();

	bool baslangictaMi();
};

int Nokta::i = 55;

Nokta::Nokta() {
	//cout << "parametresiz kurucu" << endl;
	x = 0;
	y = 0;
	i++;
}

Nokta::Nokta(int x, int y = 8) {
	//cout << "parametreli kurucu" << endl;
 	this->x = x;                 
	this->y = y;
	i++;
}

int Nokta::getX() {
	return x;
}

int Nokta::getY() {
	return y;
}

int Nokta::geti() {
	return i;
}

void Nokta::setX(int x) {
	this->x = x;
}

void Nokta::setY(int y1) {
	if (y1 > 5)
		y = y1;
	else
		y = 2;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi() {
	return (x == 0 && y == 0);
}


int main() {

	Nokta dizi[5] = { {1,3},2,{3}}; //dizi şeklinde yapacaksan parametresiz kurucu (constructer) olmak zorunda ?
	cout << dizi->i << endl;
	Nokta n1(7);
	cout << dizi->i << endl;
	Nokta n2(1,5);
	cout << n2.i << endl;
	Nokta n3 = n2;


	//for (int i = 0; i < 5; i++) {
	//	cout << dizi[i].getX() << " " << dizi[i].getY() << endl;
	//}
	
	Nokta* ptr = new Nokta(2, 7); //bellekte bir yer göstermezsen constructer çalışmaz. Constructerlar class bellekte yer alırken çalışır. Yani new ile çalışır.


	return 0;
}
*/


// destructer

/*
#include <iostream>
using namespace std;

class Nokta {

private:
	int x;
	int y;
public:
	Nokta();
	Nokta(int, int);
	~Nokta();
	//ilk giren son çıkar prensibi var

	int getX();
	int getY();
	int* z;

	void setX(int);
	void setY(int);

	void ekranaYaz();

	bool baslangictaMi();
};

Nokta::Nokta() {
	cout << "parametresiz kurucu" << endl;
	x = 0;
	y = 0;
	z = new int(5);
}

Nokta::Nokta(int x, int y = 8) {
	cout << "parametreli kurucu " << x << " " << y << endl;
	this->x = x;
	this->y = y;
	z = new int(6);
}

Nokta::~Nokta() {
	cout << "yikici calisti " << x << " " << y << endl;
	delete z;
}

int Nokta::getX() {
	return x;
}

int Nokta::getY() {
	return y;
}

void Nokta::setX(int x) {
	this->x = x;
}

void Nokta::setY(int y1) {
	if (y1 > 5)
		y = y1;
	else
		y = 2;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi() {
	return (x == 0 && y == 0);
}

int main() {

	Nokta n1;
	Nokta n2(1, 2);
	Nokta* n3;

	{

		Nokta n5(2);

	}

	cout << endl << "bbbb" << endl;
	
	n3 = new Nokta(5,5);

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Nokta {

private:
	int x;
	int y;
public:
	Nokta();
	Nokta(int, int, int);
	~Nokta();
	//il giren son çıkar prensibi var

	int getX();
	int getY();
	int* z;
	const int t;

	void setX(int);
	void setY(int);

	void ekranaYaz();

	bool baslangictaMi();
};

Nokta::Nokta() : t(0) {
	cout << "parametresiz kurucu" << endl;
	x = 0;
	y = 0;
	//t = 0; diyemezsin !
	z = new int(5);
}

Nokta::Nokta(int x, int y = 8, int a = 14) : t(a) {
	cout << "parametreli kurucu " << x << " " << y << " " << t << endl;
	this->x = x;
	this->y = y;
	z = new int(6);
}

Nokta::~Nokta() {
	cout << "yikici calisti " << x << " " << y << " " << t << endl;
	delete z;
}

int Nokta::getX() {
	return x;
}

int Nokta::getY() {
	return y;
}

void Nokta::setX(int x) {
	this->x = x;
}

void Nokta::setY(int y1) {
	if (y1 > 5)
		y = y1;
	else
		y = 2;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi() {
	return (x == 0 && y == 0);
}

int main() {

	Nokta n1(1, 20, 30);
	Nokta n2(2, 25, 100);
	cout << n1.t << endl;
	cout << n2.t << endl;

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Nokta {

private:
	int x;
	int y;
public:
	Nokta();
	Nokta(int, int, int);
	~Nokta();
	//il giren son çıkar prensibi var

	int getX()const;  //bu şekilde bu fonksiyonları kullanılarak nesnedeki özellikler değiştirilemez yani örneğin x y t değiştirilemez!!!
	int getY()const;
	int* z;
	const int t;

	void setX(int);
	void setY(int);

	void ekranaYaz();

	bool baslangictaMi();
};

Nokta::Nokta() : t(0) {
	cout << "parametresiz kurucu" << endl;
	x = 0;
	y = 0;
	//t = 0; diyemezsin !
	z = new int(5);
}

Nokta::Nokta(int x, int y = 8, int t = 14) : t(t) {
	cout << "parametreli kurucu " << x << " " << y << " " << t << endl;
	this->x = x;
	this->y = y;
	z = new int(6);
}

Nokta::~Nokta() {
	cout << "yikici calisti " << x << " " << y << " " << t << endl;
	delete z;
}

int Nokta::getX()const {
	return x;
}

int Nokta::getY()const {
	return y;
}

void Nokta::setX(int x) {
	this->x = x;
}

void Nokta::setY(int y1) {
	if (y1 > 5)
		y = y1;
	else
		y = 2;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}
 
bool Nokta::baslangictaMi() {
	return (x == 0 && y == 0);
}

int main() {

	Nokta n1(1, 20, 30);
	const Nokta n2(2, 25, 100);			//sabit nesnelerin fonksiyonunu methodunu falan çağıramazsın !!!
	cout << n1.getX() << " " << n1.getY() << endl;
	// cout << n2.t << endl; diyemezsin ama n2.t diyebilirsin. ama bu seferde private olduğu için x ve y için n2.x diyemezsin.

	return 0;
}
*/


// copy constructer

/*
#include <iostream>
using namespace std;

class Nokta {

private:
	int x;
	int y;
public:
	Nokta();
	Nokta(int, int, int);
	//kopyalama kurucusu ??? const olarak gelmeli !
	Nokta(const Nokta&);
	~Nokta();
	//il giren son çıkar prensibi var

	int getX()const;  //bu şekilde bu fonksiyonları kullanılarak nesnedeki özellikler değiştirilemez yani örneğin x y t değiştirilemez!!!
	int getY()const;
	int* z;    // bu şekil pointer tarzı bir şey tanımladıysak kopyalama kurucusunu da tanımlamamız lazım. Yoksa normalde kopyalama kurucusu varsayılan olarak oluşturulur/
	const int t;          // çünkü dafault gelen copy constructer new işlemini z için yapmaz ve nesne silinip destructer çalışırken copy yoksa ve eşittir kullandıysak nesnein biri silinmez çünkü aynı yeri gösteriyordur.

	void setX(int);
	void setY(int);

	void ekranaYaz();

	bool baslangictaMi();
};

Nokta::Nokta() : t(0) {
	cout << "parametresiz kurucu" << endl;
	x = 0;
	y = 0;
	//t = 0; diyemezsin !
	z = new int(5);
}

Nokta::Nokta(int x, int y = 8, int t = 14) : t(t) {
	cout << "parametreli kurucu " << x << " " << y << " " << " " << t << endl;
	this->x = x;
	this->y = y;
	z = new int(6);
}

Nokta::~Nokta() {
	cout << "yikici calisti " << x << " " << y << " " << " " << t << endl;
	delete z;
}

Nokta::Nokta(const Nokta& n) : t(n.t) {
	x = n.x;
	y = n.y;
	z = new int(*n.z);
	cout << "kopyalama kurucusu " << x << " " << y << " " << " " << t << endl;
}

int Nokta::getX()const {
	return x;
}

int Nokta::getY()const {
	return y;
}

void Nokta::setX(int x) {
	this->x = x;
}

void Nokta::setY(int y1) {
	if (y1 > 5)
		y = y1;
	else
		y = 2;
}

void Nokta::ekranaYaz() {
	cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi() {
	return (x == 0 && y == 0);
}

int main() {

	Nokta n1(1, 20, 30);
	Nokta n2(n1);
	Nokta n3 = n2;
	return 0;

}
*/

/*
#include <iostream>
using namespace std;

class myclass {
public:
	double a, b;
	myclass(double x, double y) {
		a = x;
		b = y;
		cout << "consturcting object a = " << a << " , b = " << b << endl;
	}
	myclass() {
		a = 5;
		b = 10;
		cout << "consturcting object (without parameters) a = " << a << " , b = " << b << endl;
	}
	~myclass() {
		cout << "destroying object a = " << a << " , b = " << b << endl;
	}
	void show_ab() {
		cout << "value of a = " << a << " , value of b = " << b << endl;
	}
};

myclass fun1(myclass *ab1) {
	
	myclass ab2(4, 5);
	ab2.a = ab2.a * ab1->a;
	ab2.b = ab2.b - ab1->b;
	return ab2;
}

int main() {
	myclass abx(4, 6), aby(10, 20);
	aby = fun1(&abx);
	aby.show_ab();
	return 0;
}
*/



/*
#include <iostream>
using namespace std;
class B;

class A {
	private:
		int x;
	public:
	int getX();
	void setX(int);
	friend void Foo(A&);
	void ekranaYaz() {
		cout << x << endl;
	}
	void setY(B&);
};

class B {
	private:
		int y;
	public:
		int getY();
		void setY(int);
		friend class A;
};

void A::setY(B& b) {
	b.y = 100;
}
int A::getX() {
	return x;
}

void A::setX(int _x) {
	x = _x;
}

void Foo(A& a) {
	a.x = 0;
}

int B::getY() {
	return y;
}

void B::setY(int _y) {
	y = _y;
}

int main() {

	A n;
	n.setX(5);
	n.ekranaYaz();
	Foo(n);
	cout << n.getX() << endl;
	B b;
	b.setY(59);
	cout <<  b.getY();
	n.setY(b);
	cout << b.getY();

	return 0;
}
*/

/*
#include <iostream>
using namespace std;
class myclass {
public:
	double a, b;
	myclass(double x, double y) {
		a = x, b = y;
		cout << "constructing object a= " << a << " b= " << b << endl;
	}
	myclass() {
		a = 5;
		b = 10;
		cout << "constructing object (without parametrers) a= " << a << "b= " << b << endl;
	}
	~myclass() {
		cout << "destroying object a= " << a << " b= " << b << endl;
	}
	void show_ab() {
		cout << "value of a= " << a << " value of b= " << b << endl;
	}
};

int
main() {

	myclass ob_1(0, 0), ob_2;
	ob_1.show_ab();
	{
		myclass ob_3(20, 50); 
	};
	ob_2.show_ab();

	return 0;

}
*/

/*
#include <iostream>
using namespace std;
class myclass {
public:double a, b;

	  myclass(double x, double y) {
		  a = x;
		  b = y;
		  cout << "Cons. obj. a= " << a << " b=" << b << endl;
	  }
	  ~myclass() {
		  cout << "Dest. obj. a=" << a << " b=" << b << endl;
	  }
	  void show_ab() {
		  cout << "value of a= " << a << "value of b= " << b << endl;
	  }
};

myclass fun1(myclass* ob1)
{
	myclass ob2(4, 5);
	ob2.a = ob2.a * ob1->a;
	ob2.b = ob2.b * ob1->b;
	return ob2;
}

int main()
{
	myclass obx(4, 6), oby(10, 20);
	oby = fun1(&obx);
	oby.show_ab();

	return 0;
}
*/


//Kartezyen toplam uzunluk bulma

/*
#include <iostream>
#include <math.h>
using namespace std;

class Dot {

private:
	int x;
	int y;

public:

	Dot();
	Dot(int, int);

	int getX();
	int getY();

	double uzunluk(const Dot& n)const;

};

double Dot::uzunluk(const Dot& n)const {
	int x = pow((this->x - n.x),2);
	int y = pow((this->y - n.y),2);
	return sqrt(x + y);
}

Dot::Dot() {
	x = 2;
	y = 5;
}

Dot::Dot(int x, int y = 8) { 
	this->x = x;              
	this->y = y;
}

int Dot::getX() {
	return x;
}

int Dot::getY() {
	return y;
}

class long_xy {
public:
	Dot start;
	Dot end;
	long_xy(Dot start, Dot end) : start(start), end(end) {

	}
	double uzun()const {
		return start.uzunluk(end);
	}
};

int main() {

	long_xy dots(Dot(4, 5), Dot(8));

	cout << dots.uzun() << endl;

	return 0;
}
*/


// + overload

/*
#include <iostream>

using namespace std;

class name {
public:
	int x;
	int y;
	name() {
		x = 5;
		y = 20;
	}

	name(int x, int y) {
		this->x = x;
		this->y = y;
	}

	name operator+ (int x)const {
		name temp;
		temp.x = this->x + x;
		temp.y = this->y + x;
		return temp;
	}

	name operator+ (const name& n)const {
		name temp;
		temp.x = this->x + n.x;
		temp.y = this->y + n.y;
		return temp;
	}

	void print() {
		cout << x << " " << y << endl;
	}
};

int main() {

	name ob1;
	ob1.print();
	name ob2(4, 2);
	ob2.print();

	(ob1 + 20).print();
	(ob2 + 10).print();

	(ob1 + ob2).print();
	ob1.print();
	ob1 = (ob1 + ob2);
	ob1.print();

	return 0;
}
*/


// = overload

/*
#include <iostream>

using namespace std;

class name {
public:
	int x;
	int y;
	name() {
		x = 5;
		y = 20;
	}

	name(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void operator= (const name& n) {
		this->x = n.x;
		this->y = n.y;
	}

	void print() {
		cout << x << " " << y << endl;
	}
};

int main() {

	name ob1;
	ob1.print();
	name ob2(4, 2);
	ob2.print();

	ob1 = ob2;
	ob1.print();
	return 0;
}
*/

/*
#include <iostream>

using namespace std;

class name {
public:
	int x;
	int y;
	double* A;

	name(int y, int x) {
		this->x = x;
		this->y = y;
		A = new double(y);
	}
	~name() {
		delete[] A;
	}

	name &operator= (name &n) {
		x = n.x;
		return *this;	 
	}

	void print() {
		cout << x << " " << y << endl;
	}
};

int main() {

	name ob1(2, 1);
	ob1.print();
	name ob2(3, 4);
	ob2.print();
	ob1 = ob2;
	ob1.print();


	return 0; 
}
*/


//postfix prefix overload

/*
#include <iostream>

using namespace std;

class vektor {
private:
	int x;
	int y;

public:
	vektor() {
		x = 0;
		y = 0;
	}

	vektor(int i, int j) {
		x = i;
		y = j;
	}
	
	void get_xy(int& i, int& j) {
		i = x;
		j = y;
	}

	vektor operator++(); //prefix
	
	vektor operator++(int notused); //postfix

	vektor operator=(vektor ob2) {
		x = ob2.x;
		y = ob2.y;
		return *this;
	}



};


vektor vektor::operator++() {
	x++;
	y++;
	return *this;
}
vektor vektor::operator++(int notused) {
	vektor temp;
	temp.x = x;
	temp.y = y;
	x++;
	y++;
	return temp;
}

int main() {
	vektor o1(10, 10), o2; int x, y;
	o2 = ++o1; //prefix increment.
	o1.get_xy(x, y);
	cout << "(++o1) X:" << x << ", Y : " << y << endl;
	o2.get_xy(x, y);
	cout << "(o2)X:" << x << ", Y : " << y << endl;
	o2 = o1++; //postfix increment.
	o1.get_xy(x, y);
	cout << "(o1++) X:" << x << ", Y : " << y << endl;
	o2.get_xy(x, y);
	cout << "(o2)X:" << x << ", Y : " << y << endl;
	return 0;
}
*/

/*
#include <iostream>

using namespace std;

class vektor {
private:
	int boyut_x;
	double V[1024];
public:
	vektor(int b_x) {
		int i;
		boyut_x = b_x;
		for (i = 0; i < boyut_x; i++) {
			V[i] = 0;
		}
	}

	void get(double* s, int size) {
		if (boyut_x == size) {
			int i;
			for (i = 0; i < size; i++) {
				s[i] = V[i];
			}
		}
		else
		{
			exit(1);
		}
	}

	vektor operator--();
	vektor operator--(int notused);
};

vektor vektor::operator--() {
	for (int i = 0; i < boyut_x; i++) {
		V[i] -= 5;
	}
	return *this;
}

vektor vektor::operator--(int notused) {
	int i;
	vektor temp(boyut_x);
	temp = *this;
	for (i = 0; i < boyut_x; i++) {
		V[i] -= 5;
	}
	return temp;	
}

void print(double* s, int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		cout << s[i] << " ";
	}
	cout << endl;
}

int main() {

	vektor ob1(3);
	double arr[3];
	ob1.get(arr, 3);
	print(arr, 3);
	vektor ob2(4);
	double arr2[4];
	ob2.get(arr2, 4);
	print(arr2, 4);

	cout << endl << endl << endl;

	(ob1--).get(arr, 3);
	print(arr, 3);
	ob1.get(arr, 3);
	print(arr, 3);

	cout << endl << endl << endl;

	(--ob2).get(arr2, 4);
	print(arr2, 4);
	ob2.get(arr2, 4);
	print(arr2, 4);

	return 0;
}
*/


//inheritance

/*
#include <iostream>
using namespace std;

class people {
protected:
	int age;
	string name;
	string surname;
public:
	people() {
		name = "";
		surname = "";
		age = 0;
	}
	people(string name, string surname, int age) : age(age), name(name), surname(surname) {	}
	int getAge() { return age; }
	string getName() { return name; }
	string getSurname() { return surname; }
	void setAge(int i) { age = i; }
	void setName(string a) { name = a; }
	void setSurname(string a) { surname = a; }
};

class student :public people {
private:
	int stuNo;
	double mathAs;
	double cheAs;
	double phyAs;
public:
	student() {
		stuNo = 0;
		mathAs = 0;
		cheAs = 0;
		phyAs = 0;
	}
	student(int a, double b, double c, double d) {
		stuNo = a;
		mathAs = b;
		cheAs = c;
		phyAs = d;
	}
	void setStu(int i) { stuNo = i; }
	void setMath(double i) { mathAs = i; }
	void setChe(double i) { cheAs = i; }
	void setPhy(double i) { phyAs = i; }
	int getStu() { return stuNo; }
	double getAvg_degree() { return ((stuNo + cheAs + phyAs) / 3); }
	void print_student();
	void set_student(int, double, double, string, double, int,  string);
};

class parent :public people {
private:
	int contactNo;
public:
	parent() {
		contactNo = 0;
	}
	parent(int a, int b) {
		contactNo = a;
	}
	void setCont(int i) { contactNo = i; }
	int getCont() { return contactNo; }
	void print_parent();
	void set_parent(int, string, string);
};

void student::print_student() {
	cout << endl << "Name & Surname: " << name << " " << surname << endl;
	cout << "Age: " << age << endl;
	cout << "School #: " << stuNo << endl;
	cout << "Degree: " << getAvg_degree() << endl;
}

void student::set_student(int ageS, double che, double math, string nameS, double phy, int No, string surnameS) {
	setAge(ageS);
	setChe(che);
	setMath(math);
	setName(nameS);
	setPhy(phy);
	setStu(No);
	setSurname(surnameS);
}

void parent::print_parent() {
	cout << "Name & Surname: " << name << " " << surname << endl;
	cout << "Contact: " << contactNo << endl;
}

void parent::set_parent(int contact, string nameP, string surnameP) {
	setCont(contact);
	setName(nameP);
	setSurname(surnameP);
}

int main() {
	int number;

	cout << "How many student do you want to save the system? (Max 5) : ";
	cin >> number;
	cout << endl;
	
	student stu[5];
	parent par[5];

	for (int i = 0; i < number; i++)
	{
		string nameS, nameP, surnameS, surnameP;
		int ageS, No, math, phy, che, contact;
	
		cout << endl << "Student [" << i+1 << "] name: ";
		cin >> nameS;
		cout << endl << "Student [" << i + 1 << "] surname: ";
		cin >> surnameS;
		cout << endl << "Student [" << i + 1 << "] age: ";
		cin >> ageS;
		cout << endl << "Student [" << i + 1 << "] number: ";
		cin >> No;
		cout << "Student math degree: ";
		cin >> math;
		cout << "Student phy degree: ";
		cin >> phy;
		cout << "Student che degree: ";
		cin	>> che;
		cout << endl << "Parent [" << i + 1 << "] name: ";
		cin >> nameP;
		cout << endl << "Parent [" << i + 1 << "] surname: ";
		cin >> surnameP;
		cout << endl << "Parent [" << i + 1 << "] contact number: ";
		cin >> contact;

		stu[i].set_student(ageS, che, math, nameS, phy, No, surnameS);
		par[i].set_parent(contact, nameP, surnameP);

	}

	cout << endl << endl << "------INFORMATIONS-------" << endl << endl;
	for (int i = 0; i < number; i++) {
		cout << endl << "Student [" << i+1 << "]:" << endl;
		stu[i].print_student();
		par[i].print_parent();
	}

	return 0;
}
*/


//virtual

/*
#include <iostream>

using namespace std;

class Base1 {
protected:
	double x, y;
public:
	Base1(double a, double b) {
		x = a;
		y = b;
	}
	virtual void f1() {
		cout << "Value of f1(x,y):" << (x * y) + 10 << endl;
	}
};

class Derived1 : public Base1 {
protected:
	double z;
public:
	Derived1(double a, double b, double c) : Base1(a, b) {
		z = c;
	}
};

class Derived2 : public Base1 {
protected:
	double t;
public:
	Derived2(double a, double b, double c) :Base1(a, b) {
		t = c;
	}

	void f1() {
		cout << "Derived2 function f1 :\n";
		cout << "Value b of f1(x,y,t) :" << (x + y) * t << endl;

	}
};

int main() {
	Base1* p, object_b1(10, 20);
	Derived1 object_d1(5, 10, 2);
	Derived2 object_d2(40, 50, 3);

	p = &object_d2;
	p->f1();

	p = &object_b1;
	p->f1();
	p = &object_d1;
	p->f1();

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	void show()
	{
		cout << "show base class" << endl;
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class" << endl;
	}

	void show()
	{
		cout << "show derived class" << endl;
	}
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();
}
*/

/*
#include <iostream>
using namespace std;

class base {
public:
	void fun_1() { cout << "base-1\n"; }
	virtual void fun_2() { cout << "base-2\n"; }
	virtual void fun_3() { cout << "base-3\n"; }
	virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base {
public:
	void fun_1() { cout << "derived-1\n"; }
	void fun_2() { cout << "derived-2\n"; }
	void fun_4() { cout << "derived-4\n"; }
};

int main()
{
	base* p;
	derived obj1;
	p = &obj1;

	// Early binding because fun1() is non-virtual
	// in base
	p->fun_1();

	// Late binding (RTP)
	p->fun_2();

	// Late binding (RTP)
	p->fun_3();

	// Late binding (RTP)
	p->fun_4();


}
*/

/*
#include <iostream>
#include <fstream>

using namespace std;
class base {
public:
	int i, j;
	base(int x, int y) {
		i = x;
		j = y;
	}
	virtual void func() {
		cout << "base version: " << i * j << endl;
	}

};
class der1 : public base {
public:
	der1(int x, int y) :base(x, y) {	}
	void func() {
		cout << "using der1 version: ";
		cout << i * i + j * j << endl;
	}
};
class der2 : public base {
public:
	der2(int x, int y) :base(x, y) {	}
	void func() {
		cout << "using der2 version: ";
		cout << i + j << endl;
	}
};
class der3 : public base {
public:
	der3(int x, int y) :base(x, y) {	}
};

int main()
{
	base* p, ob(10, 20);
	der1 d_ob1(1, 2);
	der2 d_ob2(3, 5);
	der3 d_ob3(15, 30);
	d_ob3.func();
	d_ob2.func();
	d_ob1.func();
	ob.func();
	p = &ob; p->func();
	p = &d_ob1; p->func();
	p = &d_ob2; p->func();
	p = &d_ob3; p->func();

	return 0;
}
*/


// error

/*
#include <iostream>

using namespace std;

struct A {
	double x, y, z;
	A(double a, double b, double c) {
		x = a;
		y = b;
		z = c;
	};
};

void error_function(int error) {
	try {
		double x = 5; int y = 8;
		double z = 15;
		long int t = 250;
		A u(10, 20, 30);

		if (error == 0) throw x;

		else if (error == 1) throw t;

		else if (error == 2) throw "string error 1";

		else if (error == 3) throw u;

		else if (error == 4) throw y;

		else if (error == 5) throw "string error 2";

		else if (error == 6) throw u;

		else cout << "No error" << endl;

	}
	catch (double x) {
		cout << "Cought double error. ERROR :" << x << endl;
	}
	catch (int x) {
		cout << "Caught integer error. ERROR :" << x << endl;
	}
	catch (char* x) {
		cout << "Caught string error. ERROR :" << x << endl;
	}
	catch (A x) {
		cout << "Caught A error. ERROR :" << x.x << " " << x.y << " " << x.z << endl;
	}
	catch (...) {
		cout << "UNKNOW error." << endl;
	}

}

int main() {

	error_function(5);
	error_function(6);
	error_function(4);
	error_function(2);
	error_function(3);
	error_function(1);
	error_function(0);


	return 0;
}
*/


/*
#include <iostream>
using namespace std;
class B1 {
private:
	int a;
public:
	B1(int x) {
		a = x;
		cout << "base b1 a=" << a << endl;
	}
	B1() {
		a = 100;
		cout << "base B1 (no param) a=" << a << endl;
	}
	~B1() {
		cout << "destructing b1 a=" << a << endl;
	}
	int geta() {
		return a;
	}
};
class B2 {
private:
	int b;
public:
	B2(int x) {
		b = x;
		cout << "base B2 b= " << b << endl;
	}
	~B2() {
		cout << "destructing b2 b=" << b << endl;
	}
	int getb() {
		return b;
	}
};

class D : public B2, public B1 {
private:
	int c;
public:
	D(int x, int y) :B2(x), B1() {
		c = y;
		cout << "constructing D (no parameter) c=" << c << endl;
	}

	D(int x, int y, int z) :B2(x), B1(y) {
		c = z;
		cout << "constructing D  c=" << c << endl;
	}
	~D() {
		cout << "destructing d c=" << c << endl;
	}
	void show() {
		cout << "a=" << geta() << ",b=" << getb() << ",c=" << c << endl;
	}
};

int main() {
	int i;
	D ob(1, 2, 3);
	D ob1(11, 22);
	ob.show();
	B1 bo1(50);
	cout << "a of bo1=" << bo1.geta() << endl;
	cout << "a of ob=" << ob.geta() << ",b of bo=" << ob.getb();
	cout << endl;
	return 0;

}
*/

/*
#include <iostream>
using namespace std;

class myclass {
public:
	double x, y;
	myclass(double a, double b) {
		x = a; y = b;
		cout << "Constructing,x=" << x << " y=" << y << endl;
	};
	myclass(const myclass& xx) {
		x = xx.x; y = xx.y;
		cout << "Copy Constructor,x=" << x << " y=" << y << endl;
	};
	~myclass() {
		cout << "Destroying,x=" << x << " y=" << y << endl;
	};
	void show() {
		cout << "x=" << x << " y=" << y << endl;
	}
};

void fun1(myclass* ob1) {
	myclass ob(3, 5);
	ob.x = ob.x + ob1->x;
	ob.y = ob.y + ob1->y;
	cout << "x= " << ob.x << " y=" << ob.y << endl;
}

int main() {
	myclass ob1(8, 15);
	myclass* ob2;
	ob1.show();
	fun1(&ob1);
	ob2 = &ob1;
	ob2->x = 0;
	ob1.show();
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

struct v1 {
	double x, y, z;
	void set(double a, double b, double c) {
		x = a; y = b; z = c;
	};
	void show() {
		cout << "X=" << x << " Y=" << y << " Z" << z << endl;
	};
	v1(double a, double b, double c) {//1,2,3
		x = a; y = b; z = c;
	};
	v1() {
		x = 5; y = 10; z = 15;
	}
};

template <class X> void swapargs(X& a, X& b) {
	X temp; temp = a; a = b; b = temp;
}

void swapargs(double& a, double& b) {
	cout << "This is inside swapargs(double,double)" << endl;
	a = a * b;
}

int main() {
	v1 xx(1, 2, 3), yy(10, 20, 30), a;
	int x, y;
	double c, d;
	x = 1; y = 2; c = 7; d = 8;


	cout << "Original x=" << x << " y=" << y << endl;
	swapargs(x, y);
	cout << "Swapped x=" << x << " y=" << y << endl;
	cout << "Original c=" << c << " d=" << d << endl;
	swapargs(c, d);
	cout << "Swapped c=" << c << " d=" << d << endl;

	xx.set(100, 200, 300);
	cout << "Original xx="; xx.show();
	cout << "Original yy="; yy.show();
	swapargs(xx, yy);
	cout << "Swapped xx="; xx.show();
	cout << "Swapped yy="; yy.show();



	return 0;
}
*/

// 15/03 Class OOP Lab

/*
#include <iostream>
using namespace std;

class myClass {
	int a, b;
	public:
		void set(int i, int j) { a = i, b = j; }	//inline func bellekte daha fazla yer kaplar çünkü kullanılsa da kullanılmasa da derlenir.
		void show(){ cout << a << " " << b << endl; }
};

int main() {
	
	myClass o1, o2;
	o1.set(10, 4);
	o2 = o1;
	o1.show();
	o2.show();

	return 0;
}
// Fonksiyona obje gönderdiğimizde (pointer ile değil!) obje kopyalaır ancak constructer çalışmaz ama destructer func işini bitirdiğinde çalışır. Ancak eğer copy constructer varsa nesne kopyalanırken copy constructer çalışır.
// Fonksiyondan nesne dönderiyorsak ve nesnende destructer varsa çalışır.
*/

// Sayac

/*
#include <iostream>
#include <ctime>

using namespace std;

class timer
{
	clock_t start;
public:
	timer();
	~timer();
};

timer::timer() {
	start = clock();
}

timer::~timer() {
	clock_t end;
	end = clock();
	cout << "Elapsed Time: " << (end - start) / CLOCKS_PER_SEC << endl;
}

int main() {
	timer ob;
	char c;

	cout << "Press a key followed by ENTER" << endl;
	cin >> c;
	return 0;
}
*/

// Stack with class

/*
#include <iostream >
using namespace std;
#define SIZE 10

class stack {   // Declare a stack class for characters.
	char stck[SIZE]; // holds the stack
	int tos; // index of top of stack
public:
	stack(); // constructor
	void push(char ch); // push character on stack
	char pop(); // pop character from stack
};

stack::stack() {// Initialize the stack.
	cout << "Constructing a stack\n";
	tos = 0;
}

void stack::push(char ch) {// Push a character
	if (tos == SIZE) {
		cout << "Stack is full\n";
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop() {// Pop a character
	if (tos == 0) {
		cout << "Stack is empty\n";
		return 0; // return null on empty stack
	}
	tos--;
	return stck[tos];
}
int main() {
	stack s1, s2;// Create two stacks that are automatically initialized.
	int i;
	s1.push('a'); s2.push('x');
	s1.push('b'); s2.push('y');
	s1.push('c'); s2.push('z');
	for (i = 0; i < 3; i++) cout << "Pop s1: " << s1.pop() << "\n";
	for (i = 0; i < 3; i++) cout << "Pop s2: " << s2.pop() << "\n";
	return 0;
}
*/


// #define _CRT_SECURE_NO_WARNINGS


//~~~~~~~~~~~~HOMEWORK~~~~~~~~~~~~//

//CODE #1 (Task 1)
/*
// 2019556064 Orhun Eren Yalçınkaya

#include <iostream>
#include<cmath>
using namespace std;
using std::string; using std::_Adjust_manually_vector_aligned;
using std::cout; using std::endl;
using std::cin; using std::numeric_limits;


class area_cl {
public:
	double height, width;
};

class area_rectangle : public area_cl {
public:
	double area_r(double, double);
};

class area_cylinder : public area_rectangle {
public:
	double area_c(double, double);
};

double area_rectangle::area_r(double w, double h) {
	double area;
	area = w * h;
	return area;
}

double area_cylinder::area_c(double w, double h) {
	double area;
	area = (6.28 * area_r(w/2, h)) + (6.28*w/2*w/2);
	return area;
}


int main() {
	double w, h;
	int enter = 1;
	area_cylinder cyl;
	area_rectangle rec;
	while (true)
	{
		while(enter == 1){
			cout << "Please enter two doubles for width (Width value is diameter for cylinder) and heigth...\n" << endl;
			if (cin >> w >> h) {
				break;
			}
			else {
				cout << "Enter a valid double value!\n";
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			}
		}
		if (w == 0 || h == 0) {
			cout << "Values can not be 0!\n";
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		}
		cout << endl << "Cylinders's Area is " << cyl.area_c(w, h) << endl << "Rectangle's Area is " << rec.area_r(w, h) << endl;
	}
	return 0;
}
*/

//CODE #2 (Task 4)
/*
// 2019556064 Orhun Eren Yalçınkaya
#include <iostream>
#include <string>

using namespace std;
namespace MyNamespace {
	void cout(string text) {
		std::cout << "Your input is " << text;
	}
}

int main() {
	string text;
	std::cout << "Enter a string : ";
	getline(cin, text);
	std::cout << endl;
	MyNamespace::cout(text);
	return 0;
}
*/

// ANSWERS (Task 2)
/*
1 - What is the responses of new to an allocation error ?
		Either throws an exception or returns zero
2 - What is difference between reference and pointer ?
		The pointer is the memory address of a variable.
		The reference is an alias for a variable.
		The pointer variable can refer to NULL.
		The reference variable can never refer to NULL.
		An uninitialized pointer can be created.
		An uninitialized reference can never be created.
		The pointer variable can be initialized at any point of time in the program.
		The reference variable can only be initialized at the time of its creation.
3 - What is the advantages of reference ?
		Helps you to avoid plagiarism by making it clear which ideas are your own and which are someone else’s
		Shows your understanding of the topic
		Gives supporting evidence for your ideas, arguments and opinions
		Allows others to identify the sources you have used.
*/

// TABLE (Task 3)
/*
Answers:
	Public
	Not accessible
	Protected
	Private
	Not accessible
	Private
	Protected
	Not accessible
	Protected


*/