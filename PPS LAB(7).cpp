#include <iostream>

using namespace std;

// Driver code
int main()
{
char op;
float num1, num2;
// It allows user to enter operator

cin >> op;
cin >> num1 >> num2;

switch (op) {
// If user enter +
case '+':
cout << num1 + num2;
break;
// If user enter -
case '-':
cout << num1 - num2;
break;
// If user enter *
case '*':
cout << num1 * num2;
break;
// If user enter /
case '/':
cout << num1 / num2;
break;
// If the operator is other than +, -, * or /,
default:
cout << "Error! operator is not correct";
}
// switch statement ends
return 0;
}