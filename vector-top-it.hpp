#ifndef VECTOR_TOP_IT_HPP
#define VECTOR_TOP_IT_HPP
#include <cstddef>

namespace topit {
    template <class T>
    struct Vector
    {
    Vector();
    ~Vector();

    bool isEmpty() const noexcept;
    
    private:
        T * data_;
        size_t size_, cap_;
    };
}
#endif

template <class T>
topit::Vector<T>::Vector():
    data_(),
    size_(0),
    cap_(0)
{}

template <class T>
topit::Vector<T>::~Vector()
{
    delete [] data_;
}

template <class T>
topit::Vector<T>::isEmpty() const noexcept
{
    return false;
}