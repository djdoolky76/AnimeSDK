#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class POIAKCACKAL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define POIAKCACKAL_MNPDGCJMEFH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x821430)
#define POIAKCACKAL_MNPDGCJMEFH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int POIAKCACKAL_MNPDGCJMEFH_TypeDefinitionIndex = 85708;

struct alignas(8) POIAKCACKAL_MNPDGCJMEFH
{
	::POIAKCACKAL* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIAKCACKAL_MNPDGCJMEFH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + POIAKCACKAL_MNPDGCJMEFH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
