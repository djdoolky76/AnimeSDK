#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterForceVisibleReason : ::System::Byte
	{
		Default = 0,
		ViewMode = 1,
		Task = 2,
	};
}
