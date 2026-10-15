#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AnimCategory : ::System::Byte
	{
		None = 0,
		Hit = 1,
		Hit_H = 2,
		Die = 3,
		Die_Hit = 4,
		Die_Fly = 5,
		Die_Limbo = 6,
		Hit_Fly = 7,
		Hit_Fly_Recover = 8,
		Fly_Hit = 9,
		Revive = 10,
		StandBy = 11,
	};
}
