#ifndef ARRAY_HPP
# define ARRAY_HPP
# include "Array.tpp"
# include <exception>

template <typename T>
class Array
{
	private:
		T *_data;
		unsigned int _size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &other);
		~Array(void);

		Array &operator=(Array const &other);

		T &operator[](unsigned int index);
		T const &operator[](unsigned int index) const;

		unsigned int size(void) const;

		class IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif