#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
class NHECPCFDDGI;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NHECPCFDDGI___RUN_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C533C0)
#define NHECPCFDDGI___RUN_D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int NHECPCFDDGI___Run_d__7_TypeDefinitionIndex = 44211;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	struct alignas(8) NHECPCFDDGI___Run_d__7
	{
		::NHECPCFDDGI* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::Cysharp::Threading::Tasks::UniTask task; // 0x30
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* executionCompletion; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI___RUN_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NHECPCFDDGI___RUN_D__7_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
