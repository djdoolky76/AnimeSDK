#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int InstanceCreateRequestStatus_TypeDefinitionIndex = 8198;

	enum class InstanceCreateRequestStatus : ::System::Int32
	{
		Cancelled = 6,
		DependencyFailed = 5,
		Instantiating = 2,
		Succeeded = 3,
		Failed = 4,
		WaitingDependency = 1,
		None = 0,
	};
}
