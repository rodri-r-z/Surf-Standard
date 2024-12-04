/*
    These files are part of the Surf's standard library.
    They're bundled with the main program by the compiler
    which is then converted to machine code.

    -----
    License notice:

    This code is released under the GNU GPL v3 license.
    The code is provided as is without any warranty
    Copyright (c) 2024 Rodrigo R. & all Surf contributors
*/

#ifndef SYSTEM_ENV_H
#define SYSTEM_ENV_H

#include <string>
#include "../lang/result.hpp"
#include "../lang/err.hpp"

Result<std::string, GenericErr> get_env(const std::string* key, const char* file, int f_line);
Result<bool, GenericErr> set_env(const std::string* key, const std::string* value, const char* file, int f_line);

#endif