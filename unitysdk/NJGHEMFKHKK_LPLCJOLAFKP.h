#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class NJGHEMFKHKK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NJGHEMFKHKK_LPLCJOLAFKP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x595D10)
#define NJGHEMFKHKK_LPLCJOLAFKP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int NJGHEMFKHKK_LPLCJOLAFKP_TypeDefinitionIndex = 71650;

struct alignas(8) NJGHEMFKHKK_LPLCJOLAFKP
{
	::NJGHEMFKHKK* KLHPEBKNIFB; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single PMNLNNGEIFM; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_LPLCJOLAFKP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_LPLCJOLAFKP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
