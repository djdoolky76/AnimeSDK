#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int ThenAssetLoadTask_2_TypeDefinitionIndex = 8448;

	template <typename T1, typename T2>
	class ThenAssetLoadTask_2
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadTask_1<T1>* _source; // 0x0
		::System::Func_2<T1, T2>* _transform; // 0x0
	};
}
