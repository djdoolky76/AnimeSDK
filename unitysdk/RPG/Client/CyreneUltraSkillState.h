#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CyreneUltraSkillState : ::System::Int32
	{
		None = 0,
		Normal = 1,
		InnerMax = 2,
		OutterMax = 3,
		Active = 4,
	};
}
