#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PixAir
{
	enum class PixAirNodeInstance_NodeState : ::System::Int32
	{
		Invalid = 0,
		Waiting = 1,
		Processing = 2,
		Finished = 3,
	};
}
