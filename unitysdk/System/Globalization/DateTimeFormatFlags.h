#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	enum class DateTimeFormatFlags : ::System::Int32
	{
		None = 0,
		UseGenitiveMonth = 1,
		UseLeapYearMonth = 2,
		UseSpacesInMonthNames = 4,
		UseHebrewRule = 8,
		UseSpacesInDayNames = 16,
		UseDigitPrefixInTokens = 32,
		NotInitialized = -1,
	};
}
