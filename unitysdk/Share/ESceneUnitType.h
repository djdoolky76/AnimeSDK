#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneUnitType_TypeDefinitionIndex = 9548;

	enum class ESceneUnitType : ::System::Int16
	{
		Player = 1,
		Avatar = 2,
		Npc = 0,
		Buddy = 3,
	};
}
