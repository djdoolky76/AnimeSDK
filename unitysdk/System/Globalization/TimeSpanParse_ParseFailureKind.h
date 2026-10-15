#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	enum class TimeSpanParse_ParseFailureKind : ::System::Int32
	{
		None = 0,
		ArgumentNull = 1,
		Format = 2,
		FormatWithParameter = 3,
		Overflow = 4,
	};
}
