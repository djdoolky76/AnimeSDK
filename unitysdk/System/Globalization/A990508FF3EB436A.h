#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int A990508FF3EB436A_TypeDefinitionIndex = 11120;

	enum class A990508FF3EB436A : ::System::Int32
	{
		None = 0,
		AllowLeadingWhite = 1,
		AllowTrailingWhite = 2,
		AllowInnerWhite = 4,
		AllowWhiteSpaces = 7,
		NoCurrentDateDefault = 8,
		AdjustToUniversal = 16,
		AssumeLocal = 32,
		AssumeUniversal = 64,
		RoundtripKind = 128,
	};
}
