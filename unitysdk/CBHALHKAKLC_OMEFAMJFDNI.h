#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class CBHALHKAKLC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CBHALHKAKLC_OMEFAMJFDNI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D6380)
#define CBHALHKAKLC_OMEFAMJFDNI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CBHALHKAKLC_OMEFAMJFDNI_TypeDefinitionIndex = 55889;

struct alignas(8) CBHALHKAKLC_OMEFAMJFDNI
{
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_OMEFAMJFDNI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CBHALHKAKLC_OMEFAMJFDNI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
