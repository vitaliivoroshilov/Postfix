#include <string>
#include <vector>
#include <map>
#include "TStack.h"

using namespace std;

class Postfix
{
    string infix;
    string postfix;
    map<char, int> priority;
public:
    Postfix(string _infix);
    string GetInfix();
    string GetPostfix();
    string ToPostfix();
    int Calculate();
};