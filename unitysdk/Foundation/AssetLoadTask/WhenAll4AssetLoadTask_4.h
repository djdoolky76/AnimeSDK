#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int WhenAll4AssetLoadTask_4_TypeDefinitionIndex = 8249;

	template <typename T1, typename T2, typename T3, typename T4>
	class WhenAll4AssetLoadTask_4
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadTask_1<T1>* _first; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTask_1<T2>* _second; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTask_1<T3>* _third; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTask_1<T4>* _fourth; // 0x0
	};
}
