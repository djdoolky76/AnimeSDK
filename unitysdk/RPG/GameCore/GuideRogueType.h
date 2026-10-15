#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GuideRogueType : ::System::Int32
	{
		Unknown = 0,
		RogueRelease = 1,
		RogueBeta = 2,
		GridFight = 3,
	};
}
