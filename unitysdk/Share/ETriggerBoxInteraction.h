#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ETriggerBoxInteraction_TypeDefinitionIndex = 15561;

	enum class ETriggerBoxInteraction : ::System::Int16
	{
		OnUpdate = 1,
		OnRemoveInteract = 4,
		EnumCount = 5,
		OnEnter = 0,
		OnExit = 2,
		OnAddInteract = 3,
	};
}
