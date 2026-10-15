#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtDefenceBatchSpawnState : ::System::Int32
	{
		Waiting = 0,
		Spawning = 1,
		SpawnFinish = 2,
		AllDie = 3,
	};
}
