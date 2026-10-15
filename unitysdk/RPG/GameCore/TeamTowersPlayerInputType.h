#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TeamTowersPlayerInputType : ::System::Int32
	{
		Invalid = 0,
		Move = 1,
		Rotate = 2,
		Down = 3,
	};
}
