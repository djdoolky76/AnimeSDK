#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class ILBBIFCOEDP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ILBBIFCOEDP_DNACJLPMAPJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7445E0)
#define ILBBIFCOEDP_DNACJLPMAPJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ILBBIFCOEDP_DNACJLPMAPJ_TypeDefinitionIndex = 86859;

struct alignas(8) ILBBIFCOEDP_DNACJLPMAPJ
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Threading::CancellationToken EHOGJONFLKH; // 0x30
	::ILBBIFCOEDP* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBBIFCOEDP_DNACJLPMAPJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ILBBIFCOEDP_DNACJLPMAPJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
