#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T1, typename T2> class AssetLoadAsyncStarter_2; }
namespace Foundation::AssetLoadTask { template <typename T1, typename T2> class AssetLoadAsyncTryCompleter_2; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadAsyncCanceler_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int ContextAsyncAssetLoadTask_2_TypeDefinitionIndex = 8035;

	template <typename T1, typename T2>
	class ContextAsyncAssetLoadTask_2
	{
	public:
		T1 _context; // 0x0
		::Foundation::AssetLoadTask::AssetLoadAsyncStarter_2<T2, T2>* _start; // 0x0
		::Foundation::AssetLoadTask::AssetLoadAsyncTryCompleter_2<T2, T2>* _tryCompleteImmediately; // 0x0
		::Foundation::AssetLoadTask::AssetLoadAsyncCanceler_1<T2>* _cancel; // 0x0
	};
}
