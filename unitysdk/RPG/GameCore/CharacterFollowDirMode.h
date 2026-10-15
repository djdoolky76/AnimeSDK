#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterFollowDirMode : ::System::Int32
	{
		Target = 0,
		Camera = 1,
		LightTeamToDarkTeamCenter = 2,
		SelfToEnemyCenter = 3,
	};
}
