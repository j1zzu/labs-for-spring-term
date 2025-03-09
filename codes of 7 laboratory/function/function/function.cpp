#include <iostream>

template <typename number_type>

number_type max(const number_type& x, const number_type& y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main()
{
    float x = 2.4;
    float y = 14.2;
    std::cout << "Наибольшее из чисел:" << max(x, y);
}
