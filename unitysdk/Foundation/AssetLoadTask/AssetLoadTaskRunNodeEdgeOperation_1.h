#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTaskRunNode_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskRunNodeEdgeOperation_1_TypeDefinitionIndex = 8196;

	template <typename T>
	class AssetLoadTaskRunNodeEdgeOperation_1
	{
	public:
		::System::Boolean _HasStarted_k__BackingField; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTaskRunNode_1<T>* _node; // 0x0
	};
}
