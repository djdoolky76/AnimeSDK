#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MazePuzzleMovieGameMode : ::System::Int32
	{
		OverTake = 0,
		Shooting = 1,
		OverTakeEndless = 2,
		ShootingEndless = 3,
		ShootingBoss = 4,
	};
}
