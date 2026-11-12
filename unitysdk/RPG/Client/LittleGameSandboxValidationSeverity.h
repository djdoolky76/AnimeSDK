#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameSandboxValidationSeverity_TypeDefinitionIndex = 61901;

	enum class LittleGameSandboxValidationSeverity : ::System::Int32
	{
		Warning = 0,
		Error = 1,
	};
}
