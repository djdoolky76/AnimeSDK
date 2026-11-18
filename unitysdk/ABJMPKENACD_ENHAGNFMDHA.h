#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
class ABNKJLHDDHJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_ENHAGNFMDHA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x727650)
#define ABJMPKENACD_ENHAGNFMDHA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_ENHAGNFMDHA_TypeDefinitionIndex = 88643;

struct alignas(8) ABJMPKENACD_ENHAGNFMDHA
{
	::ABNKJLHDDHJ* KNIDCNLAFMM; // 0x10
	::ABJMPKENACD* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Single PJNMMCEGENN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_ENHAGNFMDHA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_ENHAGNFMDHA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
