#ifndef PYTHONIC_NUMPY_EXP_HPP
#define PYTHONIC_NUMPY_EXP_HPP

#include "pythonic/include/numpy/exp.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME exp
#define NUMPY_NARY_FUNC_SYM boost::simd::exp
#include "pythonic/types/numpy_nary_expr.hpp"
  }
}

#endif
