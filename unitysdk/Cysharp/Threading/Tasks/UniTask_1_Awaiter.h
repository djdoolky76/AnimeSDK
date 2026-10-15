#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_1_Awaiter_TypeDefinitionIndex = 38385;

	template <typename T>
	struct alignas(8) UniTask_1_Awaiter
	{
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
	};
}
