
/**
 * @file debug.h
 * 
 * @copyright This file is part of the "mnet" project and is distributed under
 * "Mnet PLv1" license.
 * 
 * @author joba14
 * 
 * @date 2023-12-07
 */

#ifndef __mirac__include__mirac__debug_h__
#define __mirac__include__mirac__debug_h__

#ifndef NDEBUG
#	include <stdbool.h>
#	include <stdint.h>

void mnet_debug_assert_impl(
	const bool expression,
	const char* const expression_string,
	const char* const file,
	const uint64_t line);

#	define mnet_debug_assert(_expression)                                      \
		do                                                                     \
		{                                                                      \
			mnet_debug_assert_impl(_expression, #_expression,                  \
				(const char* const)__FILE__, (const uint64_t)__LINE__          \
			);                                                                 \
		} while (0)
#else
#	define mnet_debug_assert(_expression)
#endif

#endif
