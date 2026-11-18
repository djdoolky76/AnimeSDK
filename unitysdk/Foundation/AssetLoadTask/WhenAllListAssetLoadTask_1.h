#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int WhenAllListAssetLoadTask_1_TypeDefinitionIndex = 7911;

	template <typename T>
	class WhenAllListAssetLoadTask_1
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetLoadTask::AssetLoadTask_1<T>*>* _tasks; // 0x0
	};
}
