#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_AWAKEASYNC_OFFSET UNITYSDK_OFFSET(0x203D9490)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203D9650)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAwakeTrigger_TypeDefinitionIndex = 39423;

	class AsyncAwakeTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask AwakeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_AWAKEASYNC_OFFSET))(this);
		}

	};
}
