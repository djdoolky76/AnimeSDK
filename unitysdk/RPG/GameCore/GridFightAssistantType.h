#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightAssistantType : ::System::Int32
	{
		NoBuyExpHint = 0,
		NoOpenOrbHint = 1,
		NoUseEquip = 2,
		OwnTooManyEquip = 3,
	};
}
