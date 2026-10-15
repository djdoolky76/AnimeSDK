#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	enum class TimeSpanParse_TTT : ::System::Int32
	{
		None = 0,
		End = 1,
		Num = 2,
		Sep = 3,
		NumOverflow = 4,
	};
}
