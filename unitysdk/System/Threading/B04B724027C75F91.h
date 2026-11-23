#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int B04B724027C75F91_TypeDefinitionIndex = 11262;

	enum class B04B724027C75F91 : ::System::Int32
	{
		LookForMe = 0,
		LookForMyCaller = 1,
		LookForMyCallersCaller = 2,
		LookForThread = 3,
	};
}
