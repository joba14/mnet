
/**
 * @file version.h
 * 
 * @copyright This file is part of the "mnet" project and is distributed under
 * "Mnet PLv1" license.
 * 
 * @author joba14
 * 
 * @date 2023-12-07
 */

#ifndef __mnet__include__mnet__version_h__
#define __mnet__include__mnet__version_h__

#include <stdint.h>

#define mnet_version_major 1
#define mnet_version_minor 0
#define mnet_version_patch 0

/**
 * @brief Version formatting macro for printf-like functions.
 */
#define mnet_version_fmt "v%hu.%hu.%hu"

/**
 * @brief Version formatting argument macro for printf-like functions.
 */
#define mnet_version_arg (uint16_t)mirac_version_major, (uint16_t)mirac_version_minor, (uint16_t)mirac_version_patch

#endif
