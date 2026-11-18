#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System::Threading { class Timer; }

#define SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1C8C0F00)
#define SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C0DD0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_DelayPromise_TypeDefinitionIndex = 903;

	class Task_DelayPromise
	{
	public:
		::System::Threading::CancellationTokenRegistration Registration; // 0x50
		::System::Threading::CancellationToken Token; // 0x68
		::System::Threading::Timer* Timer; // 0x70

		::System::Void _ctor(::System::Threading::CancellationToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE__CTOR_OFFSET))(this, token);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE_COMPLETE_OFFSET))(this);
		}
	};
}
