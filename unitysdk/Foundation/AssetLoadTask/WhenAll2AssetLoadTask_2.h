#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int WhenAll2AssetLoadTask_2_TypeDefinitionIndex = 8579;

	template <typename T1, typename T2>
	class WhenAll2AssetLoadTask_2
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadTask_1<T1>* _first; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTask_1<T2>* _second; // 0x0
	};
}
