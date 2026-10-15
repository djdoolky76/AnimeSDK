#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	enum class XsdDuration_Parts : ::System::Int32
	{
		HasNone = 0,
		HasYears = 1,
		HasMonths = 2,
		HasDays = 4,
		HasHours = 8,
		HasMinutes = 16,
		HasSeconds = 32,
	};
}
