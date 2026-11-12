#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarGlobalBuffState_TypeDefinitionIndex = 53065;

	enum class AvatarGlobalBuffState : ::System::Int32
	{
		Enabled = 0,
		Disabled = 1,
	};
}
