#pragma once

#ifdef _MSC_VER
#  ifndef MATH_FUNCTIONS_API
#    define MATH_FUNCTIONS_API __declspec(dllimport)
#  else
#    define MATH_FUNCTIONS_API __declspec(dllexport)
#  endif
#endif

namespace math_functions {
    MATH_FUNCTIONS_API double circle_area(double r);
}
