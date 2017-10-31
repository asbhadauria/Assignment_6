#include <iostream>
using namespace std;

int main() {
	int a,b,*ptr=&a;
	b=*ptr;
	cout<<"'a' equals "<<a<<endl;
	cout<<"'b' equals "<<b<<endl;
	cout<<"'*ptr' dereferences value "<<*ptr<<endl;
	a=2;b=3;
	cout<<"'a' equals "<<a<<endl;
	cout<<"'b' equals "<<b<<endl;
	cout<<"'*ptr' dereferences value "<<*ptr<<endl;
	ptr=&b;
	cout<<"'a' equals "<<a<<endl;
	cout<<"'b' equals "<<b<<endl;
	cout<<"'*ptr' dereferences value "<<*ptr<<endl;
}