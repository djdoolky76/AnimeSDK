#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadRunHandle_1.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int TaskChainOp_1_TypeDefinitionIndex = 7895;

	template <typename T>
	class TaskChainOp_1
	{
	public:
		::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<T>*>* _taskFactory; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTask_1<T>* _task; // 0x0
		::Foundation::AssetLoadTask::AssetLoadRunHandle_1<T> _runHandle; // 0x0
	};
}
