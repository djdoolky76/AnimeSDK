#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
class IOKDDCHEGLP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IOKDDCHEGLP___PLAYANIMATION_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2E83480)
#define IOKDDCHEGLP___PLAYANIMATION_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

	template <typename T1, typename T2, typename T3>
	struct alignas(8) IOKDDCHEGLP___PlayAnimation_d__3
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::IOKDDCHEGLP* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKDDCHEGLP___PLAYANIMATION_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IOKDDCHEGLP___PLAYANIMATION_D__3_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
