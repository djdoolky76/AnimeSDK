#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ParkourGame
{
	enum class EModifyEngineFlags : ::System::Int32
	{
		None = 0,
		Accel = 1,
		Decel = 2,
	};
}
