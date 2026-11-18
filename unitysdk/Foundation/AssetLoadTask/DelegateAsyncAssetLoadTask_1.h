#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadAsyncStarter_1; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadAsyncTryCompleter_1; }
namespace System { class Action; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int DelegateAsyncAssetLoadTask_1_TypeDefinitionIndex = 8220;

	template <typename T>
	class DelegateAsyncAssetLoadTask_1
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadAsyncStarter_1<T>* _start; // 0x0
		::Foundation::AssetLoadTask::AssetLoadAsyncTryCompleter_1<T>* _tryCompleteImmediately; // 0x0
		::System::Action* _cancel; // 0x0
	};
}
