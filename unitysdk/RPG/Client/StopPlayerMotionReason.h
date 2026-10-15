#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class StopPlayerMotionReason : ::System::Int32
	{
		Task = 0,
		PlayerMotionHelper = 1,
		TeleportGate = 2,
	};
}
