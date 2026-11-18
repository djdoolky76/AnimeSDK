#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadOperation_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int WhenAll2AssetLoadOperation_2_TypeDefinitionIndex = 8004;

	template <typename T1, typename T2>
	class WhenAll2AssetLoadOperation_2
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T1>* _first; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T2>* _second; // 0x0
		T2 _firstValue; // 0x0
		T2 _secondValue; // 0x0
		::System::Boolean _firstCompleted; // 0x0
		::System::Boolean _secondCompleted; // 0x0
	};
}
