#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int EGameplayTaskEvent_TypeDefinitionIndex = 75232;

	enum class EGameplayTaskEvent : ::System::Int32
	{
		Add = 0,
		Remove = 1,
	};
}
