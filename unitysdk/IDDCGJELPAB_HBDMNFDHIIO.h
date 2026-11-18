#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class IDDCGJELPAB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IDDCGJELPAB_HBDMNFDHIIO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F6EF0)
#define IDDCGJELPAB_HBDMNFDHIIO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IDDCGJELPAB_HBDMNFDHIIO_TypeDefinitionIndex = 53207;

struct alignas(8) IDDCGJELPAB_HBDMNFDHIIO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::IDDCGJELPAB* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDCGJELPAB_HBDMNFDHIIO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IDDCGJELPAB_HBDMNFDHIIO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
