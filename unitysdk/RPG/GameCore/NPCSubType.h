#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class NPCSubType : ::System::Int32
	{
		Normal = 0,
		Avatar = 1,
		Monster = 2,
		Special = 3,
		PlayerAvatar = 4,
	};
}
