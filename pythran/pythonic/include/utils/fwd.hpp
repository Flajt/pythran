#ifndef PYTHONIC_INCLUDE_UTILS_FWD_HPP
#define PYTHONIC_INCLUDE_UTILS_FWD_HPP

namespace pythonic
{

  namespace utils
  {

    template <typename... Types>
    void fwd(Types const &... types);
  }
}

#endif
