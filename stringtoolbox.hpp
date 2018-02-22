/*
 * MIT License
 *
 * Copyright (c) 2018  Christian Berger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef STRINGTOOLBOX_HPP
#define STRINGTOOLBOX_HPP

#include <string>

namespace stringtoolbox {

/**
 * @return Map for command line parameters passed as --key=value into key->values.
 */
std::map<std::string, std::string> getCommandlineArguments(int32_t argc, char **argv) noexcept;

/**
 * @return std::string without trailing whitespace characters.
 */
inline std::string &rtrim(std::string &str) {
    str.erase(str.find_last_not_of(" \t") + 1);
    return str;
}

/**
 * @return std::tring without leading whitespace characters.
 */
inline std::string &ltrim(std::string &str) {
    str.erase(0, str.find_first_not_of(" \t"));
    return str;
}

/**
 * @return std:string without leading and trailing whitespace characters.
 */
inline std::string &trim(std::string &str) {
    return ltrim(rtrim(str));
}
} // namespace stringtoolbox

#endif