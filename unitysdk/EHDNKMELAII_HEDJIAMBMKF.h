#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class EHDNKMELAII;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EHDNKMELAII_HEDJIAMBMKF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x744DD0)
#define EHDNKMELAII_HEDJIAMBMKF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EHDNKMELAII_HEDJIAMBMKF_TypeDefinitionIndex = 71392;

struct alignas(8) EHDNKMELAII_HEDJIAMBMKF
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::EHDNKMELAII* KLHPEBKNIFB; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNKMELAII_HEDJIAMBMKF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EHDNKMELAII_HEDJIAMBMKF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
