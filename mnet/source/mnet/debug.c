
/**
 * @file debug.c
 * 
 * @copyright This file is part of the "mnet" project and is distributed under
 * "Mnet PLv1" license.
 * 
 * @author joba14
 * 
 * @date 2023-12-07
 */

#include <mnet/debug.h>

#ifndef NDEBUG
void mnet_debug_assert_impl(
	const bool expression,
	const char* const expression_string,
	const char* const file,
	const uint64_t line)
{
	if (!expression)
	{
		// TODO: implement!
	}
}
#else
_Static_assert(1, ""); // NOTE: To prevent empty translaion unit error.
#endif
