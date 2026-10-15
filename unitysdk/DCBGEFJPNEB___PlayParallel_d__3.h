#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
class DCBGEFJPNEB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DCBGEFJPNEB___PLAYPARALLEL_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52400)
#define DCBGEFJPNEB___PLAYPARALLEL_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

	template <typename T1, typename T2, typename T3>
	struct alignas(8) DCBGEFJPNEB___PlayParallel_d__3
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::DCBGEFJPNEB* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x38
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB___PLAYPARALLEL_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DCBGEFJPNEB___PLAYPARALLEL_D__3_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
