#pragma once

#include <fract/Types.h>

#if !defined MUD_MODULES || defined MUD_TYPE_LIB
#include <refl/Meta.h>
#include <refl/Enum.h>
#include <infra/StringConvert.h>
#endif

namespace mud
{
	export_ template <> inline void from_string(const string& str, mud::PatternSampling& val) { val = mud::PatternSampling(enu<mud::PatternSampling>().value(str.c_str())); };
	export_ template <> inline void to_string(const mud::PatternSampling& val, string& str) { str = enu<mud::PatternSampling>().name(uint32_t(val)); };
	
	
}
