#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoQTEStageState_TypeDefinitionIndex = 74960;

	enum class PlayVideoQTEStageState : ::System::Int32
	{
		Idle = 0,
		Preparing = 1,
		Ready = 2,
		Playing = 3,
		WaitingLoopBoundary = 4,
		Finished = 5,
		Stopped = 6,
	};
}
