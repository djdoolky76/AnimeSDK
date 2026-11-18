#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int CalendarAlgorithmType_TypeDefinitionIndex = 702;

	enum class CalendarAlgorithmType : ::System::Int32
	{
		Unknown = 0,
		SolarCalendar = 1,
		LunarCalendar = 2,
		LunisolarCalendar = 3,
	};
}
