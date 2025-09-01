export module cobalt.lang.math;

namespace cobalt::lang::math {
	export auto tabs(int x) -> int;
}

auto cobalt::lang::math::tabs(int x) -> int {
	if (x < 0)
		return -x;
	else
		return x;
}
