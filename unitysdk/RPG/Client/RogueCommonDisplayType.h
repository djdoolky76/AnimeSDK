#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RogueCommonDisplayType : ::System::Int32
	{
		None = 0,
		Get = 1,
		Drop = 2,
		RepairMiracle = 3,
		GetDestroyedMiracle = 4,
		DestroyMiracle = 5,
	};
}
