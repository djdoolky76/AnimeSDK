#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadOperation_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int WhenAllListAssetLoadOperation_1_TypeDefinitionIndex = 8701;

	template <typename T>
	class WhenAllListAssetLoadOperation_1
	{
	public:
		::Il2CppArray<::Foundation::AssetLoadTask::AssetLoadOperation_1<T>*>* _operations; // 0x0
		::System::Collections::Generic::List_1<T>* _results; // 0x0
		::Il2CppArray<::System::Boolean>* _completed; // 0x0
		::System::Int32 _pendingCount; // 0x0
	};
}
