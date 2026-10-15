#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Configuration
{
	enum class UnicodeDecodingConformance : ::System::Int32
	{
		Auto = 0,
		Strict = 1,
		Compat = 2,
		Loose = 3,
	};
}
