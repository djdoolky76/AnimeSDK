#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SenderType : ::System::Int32
	{
		None = 0,
		NPC = 1,
		Player = 2,
		PlayerAuto = 3,
		System = 4,
	};
}
