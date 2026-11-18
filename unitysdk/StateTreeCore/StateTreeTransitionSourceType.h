#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionSourceType_TypeDefinitionIndex = 30989;

	enum class StateTreeTransitionSourceType : ::System::Byte
	{
		Unset = 0,
		Asset = 1,
		ExternalRequest = 2,
		Internal = 3,
	};
}
