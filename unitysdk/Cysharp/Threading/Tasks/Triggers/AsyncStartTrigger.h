#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F138C60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_STARTASYNC_OFFSET UNITYSDK_OFFSET(0x1F138AA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_START_OFFSET UNITYSDK_OFFSET(0x1F138A80)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncStartTrigger_TypeDefinitionIndex = 38498;

	class AsyncStartTrigger
	{
	public:
		::System::Boolean called; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_START_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask StartAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_STARTASYNC_OFFSET))(this);
		}

	};
}
