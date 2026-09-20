template <typename T>
Array<T>::Array(void) : _data(0), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(0), _size(n)
{
	if (_size > 0)
		_data = new T[_size]();
}

template <typename T>
Array<T>::Array(Array const &other) : _data(0), _size(other._size)
{
	if (_size > 0)
	{
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_data[i] = other._data[i];
	}
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _data;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		T *newData = 0;
		if (other._size > 0)
		{
			newData = new T[other._size];
			for (unsigned int i = 0; i < other._size; ++i)
				newData[i] = other._data[i];
		}
		delete[] _data;
		_data = newData;
		_size = other._size;
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw IndexOutOfBoundsException();
	return _data[index];
}

template <typename T>
T const &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw IndexOutOfBoundsException();
	return _data[index];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return _size;
}

template <typename T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return "Array index out of bounds";
}
