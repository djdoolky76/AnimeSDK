#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChenLingTeamSelectorType : ::System::Int32
	{
		RelativeAlly = 0,
		RelativeEnemy = 1,
		AbsoluteAlly = 2,
		AbsoluteEnemy = 3,
	};
}
