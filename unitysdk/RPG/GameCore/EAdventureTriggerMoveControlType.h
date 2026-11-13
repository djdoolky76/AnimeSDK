#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureTriggerMoveControlType_TypeDefinitionIndex = 25046;

	enum class EAdventureTriggerMoveControlType : ::System::Int32
	{
		Auto = 0,
		ByInput = 1,
	};
}
