#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(T const &value)
{
	std::cout << value << std::endl;
}

void increment(int &value)
{
	++value;
}

void addSuffix(std::string &value)
{
	value += "_ok";
}

int main(void)
{
	int numbers[] = {1, 2, 3, 4};
	std::size_t const numbersLength = sizeof(numbers) / sizeof(numbers[0]);

	std::cout << "numbers before increment:" << std::endl;
	iter(numbers, numbersLength, printElement<int>);

	iter(numbers, numbersLength, increment);
	std::cout << "numbers after increment:" << std::endl;
	iter(numbers, numbersLength, printElement<int>);

	std::string words[] = {"hello", "cpp", "templates"};
	std::size_t const wordsLength = sizeof(words) / sizeof(words[0]);

	iter(words, wordsLength, addSuffix);
	std::cout << "words after addSuffix:" << std::endl;
	iter(words, wordsLength, printElement<std::string>);

	std::string const fixedWords[] = {"const", "array", "test"};
	std::size_t const fixedWordsLength = sizeof(fixedWords) / sizeof(fixedWords[0]);

	std::cout << "const array:" << std::endl;
	iter(fixedWords, fixedWordsLength, printElement<std::string>);

	return 0;
}
