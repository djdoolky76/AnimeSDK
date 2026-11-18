#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int CalendarWeekRule_TypeDefinitionIndex = 704;

	enum class CalendarWeekRule : ::System::Int32
	{
		FirstDay = 0,
		FirstFullWeek = 1,
		FirstFourDayWeek = 2,
	};
}
