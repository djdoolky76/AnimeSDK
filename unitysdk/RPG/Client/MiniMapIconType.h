#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MiniMapIconType : ::System::Int32
	{
		GameEntity = 0,
		Mission = 1,
		Prop = 2,
		DailyProp = 3,
		Anchor = 4,
	};
}
