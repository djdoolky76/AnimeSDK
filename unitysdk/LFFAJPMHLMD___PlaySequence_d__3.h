#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
class LFFAJPMHLMD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LFFAJPMHLMD___PLAYSEQUENCE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52AF0)
#define LFFAJPMHLMD___PLAYSEQUENCE_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

	template <typename T1, typename T2, typename T3>
	struct alignas(8) LFFAJPMHLMD___PlaySequence_d__3
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::LFFAJPMHLMD* __4__this; // 0x30
		::System::Int32 _i_5__2; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD___PLAYSEQUENCE_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LFFAJPMHLMD___PLAYSEQUENCE_D__3_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
