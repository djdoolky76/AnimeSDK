#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int LetAssetLoadTask_2_TypeDefinitionIndex = 8399;

	template <typename T1, typename T2>
	class LetAssetLoadTask_2
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadTask_1<T1>* _source; // 0x0
		::System::Func_2<T1, ::Foundation::AssetLoadTask::AssetLoadTask_1<T2>*>* _selector; // 0x0
	};
}
