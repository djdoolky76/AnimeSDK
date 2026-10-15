#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersCoreGameState_TypeDefinitionIndex = 37082;

	enum class TeamTowersCoreGameState : ::System::Byte
	{
		None = 0,
		WaitingStart = 1,
		Prepare = 2,
		Gaming = 3,
		Finished = 4,
		WaitingClean = 5,
		Destroyed = 6,
	};
}
