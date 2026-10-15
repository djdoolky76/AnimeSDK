#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MapRotation
{
	enum class EffectType : ::System::Int32
	{
		None = 0,
		HideNpc = 1,
		ShowNpc = 2,
		UnloadNpc = 3,
		DeleteNpc = 4,
	};
}
