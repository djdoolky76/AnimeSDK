#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int AdditionLockLevel_TypeDefinitionIndex = 47314;

	enum class AdditionLockLevel : ::System::Int32
	{
		UNLOCK = 0,
		HLOD = 1,
		OBJECT = 2,
	};
}
