#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestStatus_TypeDefinitionIndex = 8641;

	enum class AssetRequestStatus : ::System::Int32
	{
		Succeeded = 2,
		None = 0,
		Failed = 3,
		Unload = 4,
		Loading = 1,
	};
}
