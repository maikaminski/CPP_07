#include <iostream>
#include <string>
#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;

     std::cout << "SWAP TEST: \n" << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
    std::cout << "\nMIN/MAX TEST: \n" << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	 std::cout << "\nSWAP TEST: \n" << std::endl;
    ::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

    std::cout << "\nMIN/MAX TEST: \n" << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	return 0;
}
