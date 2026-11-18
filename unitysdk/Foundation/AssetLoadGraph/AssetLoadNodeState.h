#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadNodeState_TypeDefinitionIndex = 8485;

	enum class AssetLoadNodeState : ::System::Int32
	{
		Canceled = 4,
		Failed = 3,
		Pending = 0,
		Succeeded = 2,
		Running = 1,
		Unloaded = 5,
	};
}
