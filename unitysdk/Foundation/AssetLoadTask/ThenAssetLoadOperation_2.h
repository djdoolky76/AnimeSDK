#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadOperation_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int ThenAssetLoadOperation_2_TypeDefinitionIndex = 8091;

	template <typename T1, typename T2>
	class ThenAssetLoadOperation_2
	{
	public:
		::System::Func_2<T1, T2>* _transform; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T1>* _source; // 0x0
	};
}
