#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class NavigateTargetMode : ::System::Int32
	{
		NavigateToPosition = 0,
		NavigateToEntity = 1,
		AIKnowledge = 2,
		Anchor = 3,
	};
}
