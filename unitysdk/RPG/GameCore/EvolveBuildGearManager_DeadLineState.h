#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EvolveBuildGearManager_DeadLineState : ::System::Byte
	{
		Undefined = 0,
		Warning = 1,
		Safe = 2,
	};
}
