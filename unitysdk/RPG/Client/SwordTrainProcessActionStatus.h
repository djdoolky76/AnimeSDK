#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class SwordTrainProcessActionStatus : ::System::Int32
	{
		UnKnown = 0,
		Waiting = 1,
		Doing = 2,
		Done = 3,
	};
}
