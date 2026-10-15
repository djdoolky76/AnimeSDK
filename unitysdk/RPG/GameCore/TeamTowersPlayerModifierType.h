#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersPlayerModifierType_TypeDefinitionIndex = 18960;

	enum class TeamTowersPlayerModifierType : ::System::Byte
	{
		None = 0,
		Invincible = 1,
		Fever = 2,
	};
}
