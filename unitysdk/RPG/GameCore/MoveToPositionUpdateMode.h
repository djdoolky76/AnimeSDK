#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MoveToPositionUpdateMode : ::System::Int32
	{
		DontUpdate = 0,
		UpdateByTeamFormation = 1,
	};
}
