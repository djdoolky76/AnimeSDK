#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersLevelGameMode_TypeDefinitionIndex = 19135;

	enum class TeamTowersLevelGameMode : ::System::Byte
	{
		Default = 0,
		Race = 1,
		Infinite = 2,
	};
}
