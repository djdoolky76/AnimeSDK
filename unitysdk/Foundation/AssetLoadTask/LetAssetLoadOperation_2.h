#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadOperation_1; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadReceiver_1; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int LetAssetLoadOperation_2_TypeDefinitionIndex = 8052;

	template <typename T1, typename T2>
	class LetAssetLoadOperation_2
	{
	public:
		::System::Func_2<T1, ::Foundation::AssetLoadTask::AssetLoadTask_1<T2>*>* _selector; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T1>* _source; // 0x0
		::Foundation::AssetLoadTask::AssetLoadReceiver_1<T2>* _innerReceiver; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T2>* _inner; // 0x0
	};
}
