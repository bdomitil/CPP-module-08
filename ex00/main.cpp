#include "easyfind.hpp"

int main()
{
    try
    {
    std::array<int, 5> arr = {99, 10 ,13 ,54, 999};
    std::array<int, 5> :: iterator ait = easy_find(arr, 1);
    std::cout << *ait  << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "EXCEPTION CAUGHT" << std::endl;
    }

    try
    {
    std::set <int> set;
    set.insert(12);
    set.insert(16);
    set.insert(11);
    set.insert(999);
    std::set<int> :: iterator sit = easy_find(set, 12);
    std::cout << *sit   << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "EXCEPTION CAUGHT" << std::endl;
        
    }
}