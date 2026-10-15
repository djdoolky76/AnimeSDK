#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Utilities
{
	enum class ParserTimeZone : ::System::Int32
	{
		Unspecified = 0,
		Utc = 1,
		LocalWestOfUtc = 2,
		LocalEastOfUtc = 3,
	};
}
