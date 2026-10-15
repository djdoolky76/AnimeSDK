#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class NpcFollowByPlayerState : ::System::Int32
	{
		Move = 0,
		Wait = 1,
		Finish = 2,
	};
}
