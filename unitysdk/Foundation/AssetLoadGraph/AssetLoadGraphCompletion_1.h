#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::AssetLoadGraph { template <typename T> class IAssetLoadGraphCompletionSink_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphCompletion_1_TypeDefinitionIndex = 8509;

	template <typename T>
	struct alignas(8) AssetLoadGraphCompletion_1
	{
		::Foundation::AssetLoadGraph::IAssetLoadGraphCompletionSink_1<T>* _sink; // 0x0
	};
}
