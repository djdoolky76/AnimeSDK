#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestState_TypeDefinitionIndex = 14856;

	enum class EQuestState : ::System::Int16
	{
		Finished = 3,
		Unlocked = 0,
		Ready = 10,
		ToFinish = 2,
		InProgress = 1,
	};
}
