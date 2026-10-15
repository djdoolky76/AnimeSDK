#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	struct alignas(8) UniTask_1_Awaiter
	{
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
	};
}
