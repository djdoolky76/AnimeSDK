#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HHOBGKLENPF_AHIALMCHGCN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x796210)
#define HHOBGKLENPF_AHIALMCHGCN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HHOBGKLENPF_AHIALMCHGCN_TypeDefinitionIndex = 54309;

struct alignas(4) HHOBGKLENPF_AHIALMCHGCN
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Int32 NACGJJKHEJE; // 0x34

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_AHIALMCHGCN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HHOBGKLENPF_AHIALMCHGCN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
