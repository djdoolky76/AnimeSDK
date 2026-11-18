#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int InstantiateApiType_TypeDefinitionIndex = 8144;

	enum class InstantiateApiType : ::System::Int32
	{
		Sync = 1,
		None = 0,
		Async = 2,
	};
}
