#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	enum class TimeSpanParse_TimeSpanStandardStyles : ::System::Int32
	{
		None = 0,
		Invariant = 1,
		Localized = 2,
		RequireFull = 4,
		Any = 3,
	};
}
