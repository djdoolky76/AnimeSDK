#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS__WAITASYNC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5F300)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS__WAITASYNC_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	struct alignas(4) UnityAsyncExtensions__WaitAsync_d__11
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::System::Int32 __1__state; // 0x28
		::Cysharp::Threading::Tasks::PlayerLoopTiming waitTiming; // 0x2C
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x30
		::System::Byte _padding0[0x4];
		::Unity::Jobs::JobHandle jobHandle; // 0x38
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS__WAITASYNC_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS__WAITASYNC_D__11_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
