#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
class CLOFAEJGMPI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLOFAEJGMPI___ONASYNCEXECUTEIMPLEMENT_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3F246C0)
#define CLOFAEJGMPI___ONASYNCEXECUTEIMPLEMENT_D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xB480)

inline static constexpr unsigned int CLOFAEJGMPI___OnAsyncExecuteImplement_d__1_TypeDefinitionIndex = 45266;

	template <typename T>
	struct alignas(8) CLOFAEJGMPI___OnAsyncExecuteImplement_d__1
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::CLOFAEJGMPI* __4__this; // 0x20
		::System::Threading::CancellationToken cancelToken; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x40
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOFAEJGMPI___ONASYNCEXECUTEIMPLEMENT_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLOFAEJGMPI___ONASYNCEXECUTEIMPLEMENT_D__1_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
