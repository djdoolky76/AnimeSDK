#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class KJJFDLCHCPE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KJJFDLCHCPE_KIANDGNNGFJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EBC20)
#define KJJFDLCHCPE_KIANDGNNGFJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KJJFDLCHCPE_KIANDGNNGFJ_TypeDefinitionIndex = 70268;

struct alignas(8) KJJFDLCHCPE_KIANDGNNGFJ
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::KJJFDLCHCPE* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJFDLCHCPE_KIANDGNNGFJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KJJFDLCHCPE_KIANDGNNGFJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
