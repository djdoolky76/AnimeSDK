#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class EntitySpawnTransitionType : ::System::Int32
	{
		None = 0,
		FadeInOut = 1,
		BlackInOut = 2,
	};
}
