#ifndef PYTHONIC_BUILTIN_SET_ISSUBSET_HPP
#define PYTHONIC_BUILTIN_SET_ISSUBSET_HPP

#include "pythonic/include/builtins/set/issubset.hpp"

#include "pythonic/types/set.hpp"
#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace builtins
  {

    namespace set
    {

      template <class T, class U>
      bool issubset(types::set<T> const &set, U const &other)
      {
        return set.issubset(other);
      }

      template <class U>
      bool issubset(types::empty_set const &set, U const &other)
      {
        return true;
      }

      PROXY_IMPL(pythonic::builtins::set, issubset);
    }
  }
}
#endif