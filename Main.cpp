#include <string>
#include "Postfix.h"


int main()
{
	string infix1 = "3+5*6/(1+2)-1";
	string infix = "(1+2)/3+1*9-9/1";

	Postfix postfix(infix);
	cout << postfix.GetInfix() << endl;
	cout << postfix.GetPostfix() << endl;
	cout << postfix.Calculate() << endl;

	return 0;
}