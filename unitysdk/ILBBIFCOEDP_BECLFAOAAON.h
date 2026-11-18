#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class ILBBIFCOEDP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ILBBIFCOEDP_BECLFAOAAON_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x772340)
#define ILBBIFCOEDP_BECLFAOAAON_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ILBBIFCOEDP_BECLFAOAAON_TypeDefinitionIndex = 86860;

struct alignas(8) ILBBIFCOEDP_BECLFAOAAON
{
	::ILBBIFCOEDP* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::System::Threading::CancellationToken EHOGJONFLKH; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBBIFCOEDP_BECLFAOAAON_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ILBBIFCOEDP_BECLFAOAAON_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
