#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtSkillUseResult : ::System::Int32
	{
		Success = 0,
		Failed = 1,
		Pending = 2,
	};
}
