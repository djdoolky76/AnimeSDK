#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersCorePlayerDrawReason_TypeDefinitionIndex = 37083;

	enum class TeamTowersCorePlayerDrawReason : ::System::Byte
	{
		Leave = 0,
		TeammateDraw = 1,
		KickOut = 2,
	};
}
