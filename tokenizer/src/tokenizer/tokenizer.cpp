#include <string>

#include "tokenizer/tokenizer.hpp"

#ifndef IS_TESTING
#define IS_TESTING false
#endif

exported_class::exported_class()
    : _name {"tokenizer"},
      _test {IS_TESTING},
      _feta_dirs {feta::directories(_name, feta::directories::get_home_dir() / ".loc.json", _test)}
{}

