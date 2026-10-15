#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GameObjectPoolReleaseMode : ::System::Int32
	{
		NotRelease = 0,
		AutoRelease = 1,
		ImmediatelyRelease = 2,
	};
}
