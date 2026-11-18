#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TimeType_TypeDefinitionIndex = 68717;

	enum class TimeType : ::System::Int32
	{
		Minutes = 2,
		Seconds = 3,
		Hour = 1,
		Day = 0,
	};
}
