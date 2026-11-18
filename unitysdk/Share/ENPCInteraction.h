#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENPCInteraction_TypeDefinitionIndex = 15352;

	enum class ENPCInteraction : ::System::Int16
	{
		EnumCount = 5,
		OnInteract = 2,
		OnAddInteract = 3,
		OnEnd = 1,
		OnStart = 0,
		OnRemoveInteract = 4,
	};
}
