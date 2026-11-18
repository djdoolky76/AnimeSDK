#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EGLLGHMHMNP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define EGLLGHMHMNP_JBDALPNDKEH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7948F0)
#define EGLLGHMHMNP_JBDALPNDKEH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EGLLGHMHMNP_JBDALPNDKEH_TypeDefinitionIndex = 51019;

struct alignas(8) EGLLGHMHMNP_JBDALPNDKEH
{
	::System::Threading::CancellationTokenSource* KHGFAKJKDGG; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::EGLLGHMHMNP* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_JBDALPNDKEH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_JBDALPNDKEH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
