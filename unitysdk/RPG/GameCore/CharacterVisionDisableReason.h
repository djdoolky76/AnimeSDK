#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterVisionDisableReason : ::System::Int32
	{
		Task = 1,
		RemoteControl = 2,
		LevelConfig = 4,
	};
}
