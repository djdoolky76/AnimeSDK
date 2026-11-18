#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventTriggerResult_TypeDefinitionIndex = 15231;

	enum class EEventTriggerResult : ::System::Int16
	{
		NotFinish = -1,
		NotTrigger = 0,
		Finish = 2,
		Trigger = 1,
		All = 3,
	};
}
