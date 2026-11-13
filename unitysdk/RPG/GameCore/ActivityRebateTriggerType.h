#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRebateTriggerType_TypeDefinitionIndex = 12395;

	enum class ActivityRebateTriggerType : ::System::Int32
	{
		None = 0,
		GetItem = 1,
	};
}
