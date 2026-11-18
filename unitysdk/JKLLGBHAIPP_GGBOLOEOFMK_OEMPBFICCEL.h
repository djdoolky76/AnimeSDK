#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class JKLLGBHAIPP_GGBOLOEOFMK;
class JKLLGBHAIPP_IDAPCOBEFJG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JKLLGBHAIPP_GGBOLOEOFMK_OEMPBFICCEL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75DF90)
#define JKLLGBHAIPP_GGBOLOEOFMK_OEMPBFICCEL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JKLLGBHAIPP_GGBOLOEOFMK_OEMPBFICCEL_TypeDefinitionIndex = 56651;

struct alignas(8) JKLLGBHAIPP_GGBOLOEOFMK_OEMPBFICCEL
{
	::JKLLGBHAIPP_IDAPCOBEFJG* PGDOJBDJBOL; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x18
	::JKLLGBHAIPP_GGBOLOEOFMK* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_GGBOLOEOFMK_OEMPBFICCEL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_GGBOLOEOFMK_OEMPBFICCEL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
