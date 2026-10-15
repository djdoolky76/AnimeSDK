#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LookAtDisableCause : ::System::Int32
	{
		None = 0,
		Task = 1,
		BehaviorVisual = 2,
	};
}
