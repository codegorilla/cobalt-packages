import std;

// "import cobalt.lang.math as math" translates to the following two declarations

import cobalt.lang.math;

namespace math = cobalt::lang::math;

int main()
{
    std::cout << "Hello World!\n";

    int a = -8;

    int b = cobalt::lang::math::tabs(a);
    int c = math::tabs(a);

    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << c << std::endl;

}

