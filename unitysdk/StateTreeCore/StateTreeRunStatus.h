#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeRunStatus_TypeDefinitionIndex = 30975;

	enum class StateTreeRunStatus : ::System::Byte
	{
		Running = 0,
		Failed = 1,
		Succeeded = 2,
		Stopped = 3,
		Unset = 4,
	};
}
