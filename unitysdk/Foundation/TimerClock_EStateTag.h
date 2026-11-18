#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int TimerClock_EStateTag_TypeDefinitionIndex = 8266;

	enum class TimerClock_EStateTag : ::System::Int32
	{
		DisPospose = 1,
		New = 0,
	};
}
