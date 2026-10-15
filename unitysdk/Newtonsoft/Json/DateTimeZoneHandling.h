#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class DateTimeZoneHandling : ::System::Int32
	{
		Local = 0,
		Utc = 1,
		Unspecified = 2,
		RoundtripKind = 3,
	};
}
