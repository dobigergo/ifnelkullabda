#include <iostream>

using namespace std;

int main(){
int a=452;
int b=854; 

cout << "eredeti változók:\n" << a << endl << b << endl;

a=a*b;
b=a/b;
a=a/b;

cout << "megcserélt szorzással:\n" << a << endl << b << endl;

a=a+b;
b=a-b;
a=a-b;

cout << "visszacserélés összeadással:\n" << a << endl << b << endl;

a ^= b;
b ^= a;
a ^= b;


cout << "megcserélés exorral:\n" << a << endl << b << endl;
return 0;
}
