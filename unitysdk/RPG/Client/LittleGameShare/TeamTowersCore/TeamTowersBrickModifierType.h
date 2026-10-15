#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersBrickModifierType_TypeDefinitionIndex = 37173;

	enum class TeamTowersBrickModifierType : ::System::Byte
	{
		None = 0,
		Stone = 1,
		Ivy = 2,
	};
}
