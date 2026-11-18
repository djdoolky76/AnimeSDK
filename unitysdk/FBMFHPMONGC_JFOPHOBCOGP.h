#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_JFOPHOBCOGP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x655AA0)
#define FBMFHPMONGC_JFOPHOBCOGP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_JFOPHOBCOGP_TypeDefinitionIndex = 50518;

struct alignas(8) FBMFHPMONGC_JFOPHOBCOGP
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x30
	::System::Boolean GDNECMBHKND; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JFOPHOBCOGP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JFOPHOBCOGP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
