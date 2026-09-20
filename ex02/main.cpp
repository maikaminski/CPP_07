#include <iostream>
#include <string>
#include "Array.hpp"

static void printIntArray(Array<int> const &arr)
{
	for (unsigned int i = 0; i < arr.size(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main(void)
{
	Array<int> empty;
	std::cout << "empty size: " << empty.size() << std::endl;

	Array<int> numbers(5);
	for (unsigned int i = 0; i < numbers.size(); ++i)
		numbers[i] = static_cast<int>(i * 10);

	std::cout << "numbers: ";
	printIntArray(numbers);

	Array<int> copy(numbers);
	copy[0] = 999;
	std::cout << "after copy change:" << std::endl;
	std::cout << "original numbers: ";
	printIntArray(numbers);
	std::cout << "copy: ";
	printIntArray(copy);

	Array<int> assigned;
	assigned = numbers;
	assigned[1] = 777;
	std::cout << "after assignment change:" << std::endl;
	std::cout << "original numbers: ";
	printIntArray(numbers);
	std::cout << "assigned: ";
	printIntArray(assigned);

	Array<std::string> words(3);
	words[0] = "hello";
	words[1] = "cpp";
	words[2] = "templates";
	std::cout << "words: ";
	for (unsigned int i = 0; i < words.size(); ++i)
		std::cout << words[i] << " ";
	std::cout << std::endl;

	try
	{
		std::cout << numbers[42] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	return 0;
}
