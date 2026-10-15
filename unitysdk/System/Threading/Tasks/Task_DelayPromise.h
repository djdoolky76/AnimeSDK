#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace System::Threading { class Timer; }

#define SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1C15A4A0)
#define SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C159AC0)

namespace System::Threading::Tasks
{
	class Task_DelayPromise
	{
	public:
		::System::Threading::CancellationTokenRegistration Registration; // 0x50
		::System::Threading::CancellationToken Token; // 0x68
		::System::Threading::Timer* Timer; // 0x70
		::System::Void _ctor(::System::Threading::CancellationToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK_DELAYPROMISE_COMPLETE_OFFSET))(this);
		}

	};
}
