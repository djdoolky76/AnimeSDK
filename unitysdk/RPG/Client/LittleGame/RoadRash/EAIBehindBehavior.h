#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	enum class EAIBehindBehavior : ::System::Int32
	{
		DoNothing = 0,
		SpeedUp = 1,
		Buff = 2,
	};
}
