#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class AMJIOCDAIJO;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AMJIOCDAIJO_GAODABMMJNA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7263B0)
#define AMJIOCDAIJO_GAODABMMJNA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AMJIOCDAIJO_GAODABMMJNA_TypeDefinitionIndex = 83691;

struct alignas(8) AMJIOCDAIJO_GAODABMMJNA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::AMJIOCDAIJO* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_GAODABMMJNA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_GAODABMMJNA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
