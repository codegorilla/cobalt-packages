export module cobalt.lang.math;

namespace cobalt::lang::math {
	export auto abs (float x) -> float;

	export auto cos1 (float x) -> float;
}

auto cobalt::lang::math::abs (float x) -> float {
	if (x < 0)
		return -x;
	else
		return x;
}

auto cobalt::lang::math::cos1 (float x) -> float {
	return 0.25 * x;
}
