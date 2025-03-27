// Copyright 2025 by Amir Nourinia

module;
#include <type_traits>
export module Yellow:Float;

export namespace yellow {

/**
 * This class can represent any number from the field F to the highest precision
 * based on the representation R.
 * The idea is that the floating numbers exhibit the highest precision around 1.
 * So, by keeping an extra member that holds the exponent value in base 2
 * we can normalize each number. This data struct would retain the accuracy that it was initialized with
 * to the best ability of its representation field. It would not remedy the rounding problem of adding large
 * numbers to very small ones. It would enhance it but would not completely fix it since we have more numbers that
 * are representable around 1.
 * @tparam F
 * @tparam R
 * @tparam E
 */
template <typename F, typename R>
  requires std::is_arithmetic_v<F> && std::is_floating_point_v<R>
class Float {
  using E = std::conditional< sizeof() >

private:
  R m_value;
  E m_exponent;
};

} // namespace yellow