#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
class NHECPCFDDGI;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NHECPCFDDGI___STOPASYNC_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52CA0)
#define NHECPCFDDGI___STOPASYNC_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int NHECPCFDDGI___StopAsync_d__3_TypeDefinitionIndex = 44212;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NHECPCFDDGI___StopAsync_d__3
	{
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* completion; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::NHECPCFDDGI* __4__this; // 0x28
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* executionCompletion; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI___STOPASYNC_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NHECPCFDDGI___STOPASYNC_D__3_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
