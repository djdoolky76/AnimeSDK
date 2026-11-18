#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int ParameterType_TypeDefinitionIndex = 8983;

	enum class ParameterType : ::System::Byte
	{
		Max = 10,
		Bool = 4,
		Trigger = 9,
		Int = 3,
		Float = 1,
		None = 0,
	};
}
