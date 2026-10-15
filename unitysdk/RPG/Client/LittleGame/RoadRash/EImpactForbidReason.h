#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	enum class EImpactForbidReason : ::System::Int32
	{
		None = 0,
		Ultimate = 1,
		Slam = 2,
		KnockUp = 4,
	};
}
