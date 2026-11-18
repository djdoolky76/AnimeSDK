#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::AssetLoadTask { template <typename T> class IAssetLoadCompletionSink_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadCompletion_1_TypeDefinitionIndex = 7982;

	template <typename T>
	struct alignas(8) AssetLoadCompletion_1
	{
		::Foundation::AssetLoadTask::IAssetLoadCompletionSink_1<T>* _sink; // 0x0
	};
}
