#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_RenderPriority_TypeDefinitionIndex = 57918;

	enum class HollowEntityConfig_RenderPriority : ::System::Int32
	{
		MiniGameBG = 4,
		Npc = 1,
		GridEvent = 3,
		Default = 0,
		Alert = 5,
		Player = 2,
	};
}
