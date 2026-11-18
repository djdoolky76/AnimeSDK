#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventState_TypeDefinitionIndex = 17148;

	enum class EEventState : ::System::Int16
	{
		Initing = 0,
		Finished = 5,
		Pause = 2,
		Error = 6,
		EnumCount = 7,
		WaitingClient = 4,
		WaitingMsg = 3,
		Running = 1,
	};
}
