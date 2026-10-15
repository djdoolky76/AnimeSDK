#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/Cysharp/Threading/Tasks/CancellationTokenAwaitable_Awaiter.h"

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x1D30)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenAwaitable_TypeDefinitionIndex = 38136;

	struct alignas(4) CancellationTokenAwaitable
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Void _ctor(::System::Threading::CancellationToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_CTOR_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_GETAWAITER_OFFSET))(this);
		}

	};
}
