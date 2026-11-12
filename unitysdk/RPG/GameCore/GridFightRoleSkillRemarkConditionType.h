#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSkillRemarkConditionType_TypeDefinitionIndex = 13668;

	enum class GridFightRoleSkillRemarkConditionType : ::System::Int32
	{
		None = 0,
		Always = 1,
		MoonGameSubtrait = 2,
	};
}
