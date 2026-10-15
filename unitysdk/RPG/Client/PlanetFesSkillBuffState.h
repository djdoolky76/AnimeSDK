#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PlanetFesSkillBuffState : ::System::Int32
	{
		Lock = 0,
		Unlock = 1,
		Upgrade = 2,
		Finish = 3,
	};
}
