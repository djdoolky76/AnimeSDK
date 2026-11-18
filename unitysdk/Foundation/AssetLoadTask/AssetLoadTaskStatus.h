#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskStatus_TypeDefinitionIndex = 8453;

	enum class AssetLoadTaskStatus : ::System::Int32
	{
		Disposed = 6,
		Succeeded = 2,
		Failed = 3,
		Canceled = 4,
		None = 0,
		Running = 1,
		Unloaded = 5,
	};
}
