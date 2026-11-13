#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureTriggerMoveRotateType_TypeDefinitionIndex = 25047;

	enum class EAdventureTriggerMoveRotateType : ::System::Int32
	{
		Auto = 0,
		FollowPathYaw = 1,
	};
}
