// Copyright 2025 by Amir Nourinia

module;
#include <type_traits>
export module Yellow:Float;

export namespace yellow {

/**
 * This class can represent any number from the field F to the highest precision
 * based on the representation R.
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