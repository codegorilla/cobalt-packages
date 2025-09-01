import std;

// "import cobalt.lang.math as math" translates to the following two declarations

import cobalt.lang.math;

namespace math = cobalt::lang::math;

// "from cobalt.lang.math import cos" translates to the following two declarations

import cobalt.lang.math;

using cobalt::lang::math::cos1;


int main()
{
    std::cout << "Hello World!\n";

    float a = -10.0;

    float b = cobalt::lang::math::abs(a);
    float c = math::abs(a);

    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << c << std::endl;

    float d = cos1(a);

    std::cout << d << std::endl;

    return 0;
}

