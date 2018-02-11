#ifndef STAN_LANG_AST_MATRIX_TYPE_HPP
#define STAN_LANG_AST_MATRIX_TYPE_HPP

#include <string>

namespace stan {
  namespace lang {

    /**
     * Matrix type.
     */
    struct matrix_type {
      /**
       * Returns identity string for this type.
       */
      std::string oid() const;
    };

  }
}
#endif