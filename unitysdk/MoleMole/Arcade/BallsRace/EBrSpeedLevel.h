#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int EBrSpeedLevel_TypeDefinitionIndex = 93799;

	enum class EBrSpeedLevel : ::System::Int32
	{
		None = -1,
		Level2 = 2,
		LevelMax = 3,
		Level1 = 1,
		Level0 = 0,
		Idle = 4,
	};
}
