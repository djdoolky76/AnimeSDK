#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAIActionState_TypeDefinitionIndex = 69565;

	enum class NPCAIActionState : ::System::Int32
	{
		Completed = 2,
		None = 0,
		Aborted = 3,
		Failed = 4,
		InProgress = 1,
	};
}
