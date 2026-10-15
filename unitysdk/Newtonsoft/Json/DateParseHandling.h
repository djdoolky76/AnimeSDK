#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class DateParseHandling : ::System::Int32
	{
		None = 0,
		DateTime = 1,
		DateTimeOffset = 2,
	};
}
