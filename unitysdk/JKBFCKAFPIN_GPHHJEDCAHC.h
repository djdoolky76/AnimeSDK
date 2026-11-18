#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class JKBFCKAFPIN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JKBFCKAFPIN_GPHHJEDCAHC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7540D0)
#define JKBFCKAFPIN_GPHHJEDCAHC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JKBFCKAFPIN_GPHHJEDCAHC_TypeDefinitionIndex = 39754;

struct alignas(8) JKBFCKAFPIN_GPHHJEDCAHC
{
	::JKBFCKAFPIN* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBFCKAFPIN_GPHHJEDCAHC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JKBFCKAFPIN_GPHHJEDCAHC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
