#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class MovieAchievementType : ::System::Int32
	{
		FinishGameWithoutMiss = 0,
		PassTime = 1,
		FlipPause = 2,
		FeverOneMore = 3,
		DestoryAllEnemy = 4,
		TakeAllPropWithLevel = 5,
		CounterBullet = 6,
		NoCounterBullet = 7,
	};
}
