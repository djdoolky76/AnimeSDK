#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersBrickModifierType_TypeDefinitionIndex = 38101;

	enum class TeamTowersBrickModifierType : ::System::Byte
	{
		None = 0,
		Stone = 1,
		Ivy = 2,
	};
}
