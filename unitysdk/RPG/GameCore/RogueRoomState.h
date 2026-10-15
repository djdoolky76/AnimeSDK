#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueRoomState : ::System::Int32
	{
		None = 0,
		Inited = 1,
		Processing = 2,
		Finish = 3,
	};
}
