#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class EGLLGHMHMNP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EGLLGHMHMNP_DPHHFGPFPIN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x706E30)
#define EGLLGHMHMNP_DPHHFGPFPIN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EGLLGHMHMNP_DPHHFGPFPIN_TypeDefinitionIndex = 51020;

struct alignas(8) EGLLGHMHMNP_DPHHFGPFPIN
{
	::EGLLGHMHMNP* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_DPHHFGPFPIN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_DPHHFGPFPIN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
