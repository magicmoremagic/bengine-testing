#pragma once
#ifndef BE_TESTING_VERSION_HPP_
#define BE_TESTING_VERSION_HPP_

#include <be/core/macros.hpp>

#define BE_TESTING_VERSION_MAJOR 0
#define BE_TESTING_VERSION_MINOR 1
#define BE_TESTING_VERSION_REV 7

/*!! include('common/version', 'be::testing') !! 6 */
/* ################# !! GENERATED CODE -- DO NOT MODIFY !! ################# */
#define BE_TESTING_VERSION (BE_TESTING_VERSION_MAJOR * 100000 + BE_TESTING_VERSION_MINOR * 1000 + BE_TESTING_VERSION_REV)
#define BE_TESTING_VERSION_STRING "be::testing " BE_STRINGIFY(BE_TESTING_VERSION_MAJOR) "." BE_STRINGIFY(BE_TESTING_VERSION_MINOR) "." BE_STRINGIFY(BE_TESTING_VERSION_REV)

/* ######################### END OF GENERATED CODE ######################### */

#endif
