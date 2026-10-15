#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__85_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5EED0)
#define CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__85_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask__RunOnThreadPool_d__85_TypeDefinitionIndex = 38353;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79, typename T80, typename T81, typename T82, typename T83, typename T84, typename T85>
	struct alignas(8) UniTask__RunOnThreadPool_d__85
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* action; // 0x20
		::System::Object* __7__wrap1; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Int32 __7__wrap2; // 0x4C
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__3; // 0x50
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter __u__1; // 0x54
		::System::Boolean configureAwait; // 0x55
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__85_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__RUNONTHREADPOOL_D__85_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
