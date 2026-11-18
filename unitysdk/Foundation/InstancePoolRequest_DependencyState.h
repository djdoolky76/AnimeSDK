#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int InstancePoolRequest_DependencyState_TypeDefinitionIndex = 7829;

	enum class InstancePoolRequest_DependencyState : ::System::Int32
	{
		Waiting = 1,
		Failed = 0,
		Ready = 2,
	};
}
