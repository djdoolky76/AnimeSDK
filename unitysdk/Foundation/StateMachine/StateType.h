#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int StateType_TypeDefinitionIndex = 9021;

	enum class StateType : ::System::Byte
	{
		State = 0,
		Machine = 1,
	};
}
