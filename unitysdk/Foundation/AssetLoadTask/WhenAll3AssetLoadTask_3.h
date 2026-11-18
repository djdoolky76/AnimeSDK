#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int WhenAll3AssetLoadTask_3_TypeDefinitionIndex = 7920;

	template <typename T1, typename T2, typename T3>
	class WhenAll3AssetLoadTask_3
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadTask_1<T1>* _first; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTask_1<T2>* _second; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTask_1<T3>* _third; // 0x0
	};
}
