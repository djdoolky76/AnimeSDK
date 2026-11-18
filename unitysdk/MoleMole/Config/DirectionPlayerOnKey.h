#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DirectionPlayerOnKey_TypeDefinitionIndex = 38809;

	enum class DirectionPlayerOnKey : ::System::Int32
	{
		StringPushArrive = 7,
		PushDistanceArrive = 10,
		StringPushStart = 6,
		None = 0,
		ConveyerBeltPushArrive = 8,
		OneStepBlocked = 4,
		PushDistanceStart = 9,
		ContinousMoveBlocked = 5,
		Move = 1,
		PushBackArrive = 3,
		BeforePushBack = 2,
	};
}
