#ifndef PYTHONIC_BUILTIN_SET_CLEAR_HPP
#define PYTHONIC_BUILTIN_SET_CLEAR_HPP

#include "pythonic/include/builtins/set/clear.hpp"

#include "pythonic/__dispatch__/clear.hpp"
#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace builtins
  {

    namespace set
    {

      ALIAS(clear, pythonic::__dispatch__::clear);

      PROXY_IMPL(pythonic::builtins::set, clear);
    }
  }
}
#endif