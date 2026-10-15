#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
class PHKOFFOLPPG;
class PHKOFFOLPPG_HFFPHANAHLP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PHKOFFOLPPG___PLAY_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52DA0)
#define PHKOFFOLPPG___PLAY_D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int PHKOFFOLPPG___Play_d__17_TypeDefinitionIndex = 44173;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	struct alignas(8) PHKOFFOLPPG___Play_d__17
	{
		::PHKOFFOLPPG_HFFPHANAHLP* activeStageStep; // 0x10
		::PHKOFFOLPPG* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG___PLAY_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG___PLAY_D__17_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
