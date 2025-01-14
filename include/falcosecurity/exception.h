/*
Copyright (C) 2023 The Falco Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/

#pragma once

#include <stdexcept>
#include <string>
#include <falcosecurity/internal/hacks.h>

namespace falcosecurity
{

class plugin_exception : public std::runtime_error
{
    public:
    FALCOSECURITY_INLINE
    plugin_exception(const std::string& error_str):
            std::runtime_error(error_str)
    {
    }

    FALCOSECURITY_INLINE
    plugin_exception(const char* const error_str): std::runtime_error(error_str)
    {
    }
};

} // namespace falcosecurity