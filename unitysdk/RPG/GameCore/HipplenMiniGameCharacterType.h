#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class HipplenMiniGameCharacterType : ::System::Int32
	{
		StoryNPC = 0,
		StaticPrefab = 1,
		LocalPlayer = 2,
	};
}
