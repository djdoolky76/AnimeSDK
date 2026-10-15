#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	enum class HebrewNumberParsingState : ::System::Int32
	{
		InvalidHebrewNumber = 0,
		NotHebrewDigit = 1,
		FoundEndOfHebrewNumber = 2,
		ContinueParsing = 3,
	};
}
