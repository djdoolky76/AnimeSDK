#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PedestrianV2State : ::System::Int32
	{
		None = 0,
		Init = 1,
		Activate = 2,
		Deactivate = 3,
		Destroyed = 4,
	};
}
