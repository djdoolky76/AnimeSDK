#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EntityDestroyWaitReason : ::System::Int32
	{
		Kill = 0,
		DeathPerform = 1,
	};
}
