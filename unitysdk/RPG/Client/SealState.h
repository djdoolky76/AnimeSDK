#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class SealState : ::System::Int32
	{
		Idle = 0,
		Rotate = 1,
		Move = 2,
	};
}
