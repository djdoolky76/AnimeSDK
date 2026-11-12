#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameSandboxCompletionResult_TypeDefinitionIndex = 61940;

	enum class LittleGameSandboxCompletionResult : ::System::Int32
	{
		Completed = 0,
		Cancelled = 1,
		Failed = 2,
	};
}
