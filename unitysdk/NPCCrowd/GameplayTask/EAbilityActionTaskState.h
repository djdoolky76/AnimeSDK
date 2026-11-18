#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int EAbilityActionTaskState_TypeDefinitionIndex = 89016;

	enum class EAbilityActionTaskState : ::System::Int32
	{
		AwaitingActivation = 1,
		Finished = 4,
		Active = 3,
		Uninitialized = 0,
		Paused = 2,
	};
}
