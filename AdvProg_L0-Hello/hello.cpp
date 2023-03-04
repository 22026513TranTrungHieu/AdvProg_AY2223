#include <iostream>
#include "hello.h"

std::string printGameOver(){
	// TODO: Return the required string
	cout << "Hello World!";
	return printGameOver();
}
int main()
{
	printGameOver();
	return 0;
}
