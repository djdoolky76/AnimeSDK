#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class ETimelineControlGamePlayMode : ::System::Int32
	{
		Default = 0,
		Simulate = 1,
		Performance = 2,
	};
}
