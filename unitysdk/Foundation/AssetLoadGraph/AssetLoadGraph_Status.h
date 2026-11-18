#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraph_Status_TypeDefinitionIndex = 8570;

	enum class AssetLoadGraph_Status : ::System::Int32
	{
		None = 0,
		Canceled = 4,
		Succeeded = 2,
		Running = 1,
		Failed = 3,
		Disposed = 5,
	};
}
