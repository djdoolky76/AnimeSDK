#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"

#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2E8C190)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToThreadPoolAwaitable_TypeDefinitionIndex = 38367;

	struct alignas(4) SwitchToThreadPoolAwaitable
	{
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET))(this);
		}

	};
}
