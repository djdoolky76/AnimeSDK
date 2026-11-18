#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadOperation_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int WhenAll3AssetLoadOperation_3_TypeDefinitionIndex = 8481;

	template <typename T1, typename T2, typename T3>
	class WhenAll3AssetLoadOperation_3
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T1>* _first; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T2>* _second; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T3>* _third; // 0x0
		T3 _firstValue; // 0x0
		T3 _secondValue; // 0x0
		T3 _thirdValue; // 0x0
		::System::Boolean _firstCompleted; // 0x0
		::System::Boolean _secondCompleted; // 0x0
		::System::Boolean _thirdCompleted; // 0x0
	};
}
