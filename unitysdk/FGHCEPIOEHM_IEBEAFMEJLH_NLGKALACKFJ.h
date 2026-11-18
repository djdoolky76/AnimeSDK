#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FGHCEPIOEHM_IEBEAFMEJLH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FGHCEPIOEHM_IEBEAFMEJLH_NLGKALACKFJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x724FA0)
#define FGHCEPIOEHM_IEBEAFMEJLH_NLGKALACKFJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FGHCEPIOEHM_IEBEAFMEJLH_NLGKALACKFJ_TypeDefinitionIndex = 69821;

struct alignas(8) FGHCEPIOEHM_IEBEAFMEJLH_NLGKALACKFJ
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::FGHCEPIOEHM_IEBEAFMEJLH* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_IEBEAFMEJLH_NLGKALACKFJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_IEBEAFMEJLH_NLGKALACKFJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
