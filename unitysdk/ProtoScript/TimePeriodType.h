#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 22622;

	enum class TimePeriodType : ::System::Int32
	{
		TIME_PERIOD_TYPE_NONE = 0,
		NOW = 99,
		EVENING = 3,
		NIGHT = 4,
		AFTERNOON = 2,
		MORNING = 1,
	};
}
