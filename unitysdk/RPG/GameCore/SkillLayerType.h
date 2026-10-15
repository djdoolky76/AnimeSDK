#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillLayerType : ::System::Int32
	{
		Normal = 0,
		Parent = 1,
		Child = 2,
	};
}
