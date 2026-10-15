#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class Effect_DynamicWavesManager_IntervalState : ::System::Int32
	{
		NonUpdate = 0,
		Update = 1,
		SpecialUpdate = 2,
	};
}
