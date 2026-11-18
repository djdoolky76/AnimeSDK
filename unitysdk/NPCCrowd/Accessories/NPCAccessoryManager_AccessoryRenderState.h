#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_AccessoryRenderState_TypeDefinitionIndex = 52991;

	enum class NPCAccessoryManager_AccessoryRenderState : ::System::Byte
	{
		Hidden = 0,
		Simple = 2,
		Color = 1,
	};
}
