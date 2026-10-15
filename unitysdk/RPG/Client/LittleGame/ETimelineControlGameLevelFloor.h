#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class ETimelineControlGameLevelFloor : ::System::Int32
	{
		None = 0,
		Plane = 341,
		Stair = 72,
		Stair90 = 288,
		Stair180 = 132,
		Stair270 = 528,
	};
}
