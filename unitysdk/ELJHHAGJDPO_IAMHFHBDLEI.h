#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class ELJHHAGJDPO;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ELJHHAGJDPO_IAMHFHBDLEI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A2760)
#define ELJHHAGJDPO_IAMHFHBDLEI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int ELJHHAGJDPO_IAMHFHBDLEI_TypeDefinitionIndex = 50553;

struct alignas(8) ELJHHAGJDPO_IAMHFHBDLEI
{
	::ELJHHAGJDPO* KLHPEBKNIFB; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJHHAGJDPO_IAMHFHBDLEI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ELJHHAGJDPO_IAMHFHBDLEI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
