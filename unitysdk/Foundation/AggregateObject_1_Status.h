#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_Status_TypeDefinitionIndex = 8864;

	enum class AggregateObject_1_Status : ::System::Int32
	{
		None = 0,
		OnRegistered = 2,
		IsRegistering = 1,
		Initialized = 3,
	};
}
