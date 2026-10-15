#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	enum class CakeRaceSyncReason : ::System::Int32
	{
		Default = 0,
		LevelStateChange = 1,
	};
}
