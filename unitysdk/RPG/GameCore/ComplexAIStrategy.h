#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexAIStrategy_TypeDefinitionIndex = 54333;

	enum class ComplexAIStrategy : ::System::Byte
	{
		None = 0,
		DefaultComplexAI = 1,
		StandaloneSkillMap = 2,
	};
}
