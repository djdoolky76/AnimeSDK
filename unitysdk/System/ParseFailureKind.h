#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class ParseFailureKind : ::System::Int32
	{
		None = 0,
		ArgumentNull = 1,
		Format = 2,
		FormatWithParameter = 3,
		FormatBadDateTimeCalendar = 4,
	};
}
