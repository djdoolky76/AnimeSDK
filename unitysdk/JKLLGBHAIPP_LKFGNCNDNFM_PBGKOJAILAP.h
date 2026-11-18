#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class JKLLGBHAIPP_LKFGNCNDNFM;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JKLLGBHAIPP_LKFGNCNDNFM_PBGKOJAILAP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F9CE0)
#define JKLLGBHAIPP_LKFGNCNDNFM_PBGKOJAILAP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JKLLGBHAIPP_LKFGNCNDNFM_PBGKOJAILAP_TypeDefinitionIndex = 56654;

struct alignas(8) JKLLGBHAIPP_LKFGNCNDNFM_PBGKOJAILAP
{
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::JKLLGBHAIPP_LKFGNCNDNFM* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_LKFGNCNDNFM_PBGKOJAILAP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_LKFGNCNDNFM_PBGKOJAILAP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
