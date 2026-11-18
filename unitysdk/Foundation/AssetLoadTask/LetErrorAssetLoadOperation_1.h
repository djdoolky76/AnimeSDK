#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadOperation_1; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int LetErrorAssetLoadOperation_1_TypeDefinitionIndex = 8319;

	template <typename T>
	class LetErrorAssetLoadOperation_1
	{
	public:
		::System::Func_2<::System::Exception*, ::Foundation::AssetLoadTask::AssetLoadTask_1<T>*>* _recover; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T>* _source; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T>* _recovery; // 0x0
	};
}
