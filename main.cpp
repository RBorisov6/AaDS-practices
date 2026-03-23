#include "vector-top-it.hpp"
#include <iomanip>

bool testDefaultVector()
{
    using topit::Vector;
    Vector <int> v;
    return v.isEmpty();
}

int main()
{
    using test_t = bool(*)();
    tests[] = {
        test1
    };
    std::cout << boolalpha;
    for(size_t i = 0; i < ???; ++i){
        std::cout << tests[i]()  << ": " << '\n';
    }
}
