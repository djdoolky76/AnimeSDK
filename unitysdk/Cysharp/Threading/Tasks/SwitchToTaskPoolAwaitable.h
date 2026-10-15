#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToTaskPoolAwaitable_Awaiter.h"

#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2E8C190)

namespace Cysharp::Threading::Tasks
{
	struct alignas(4) SwitchToTaskPoolAwaitable
	{
		::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_GETAWAITER_OFFSET))(this);
		}

	};
}
