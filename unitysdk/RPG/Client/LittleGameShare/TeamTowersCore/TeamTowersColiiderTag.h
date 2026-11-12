#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersColiiderTag_TypeDefinitionIndex = 38085;

	enum class TeamTowersColiiderTag : ::System::Byte
	{
		Brick = 1,
		DeadArea = 2,
	};
}
