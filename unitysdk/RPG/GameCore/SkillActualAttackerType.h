#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillActualAttackerType : ::System::Int32
	{
		Self = 0,
		Servant = 1,
		None = 2,
	};
}
