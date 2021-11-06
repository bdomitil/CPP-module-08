#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <array>
#include <set>

template <typename T>
typename T::iterator easy_find(T &container, int x)
{
	if ((std::find(container.begin(), container.end() , x)) == container.end())
		throw std::exception();
    return ( std::find(container.begin(), container.end() , x) );
}

#endif