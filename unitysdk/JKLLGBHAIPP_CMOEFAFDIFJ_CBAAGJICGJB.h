#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class JKLLGBHAIPP_CMOEFAFDIFJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JKLLGBHAIPP_CMOEFAFDIFJ_CBAAGJICGJB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8234C0)
#define JKLLGBHAIPP_CMOEFAFDIFJ_CBAAGJICGJB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JKLLGBHAIPP_CMOEFAFDIFJ_CBAAGJICGJB_TypeDefinitionIndex = 56649;

struct alignas(8) JKLLGBHAIPP_CMOEFAFDIFJ_CBAAGJICGJB
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::JKLLGBHAIPP_CMOEFAFDIFJ* KLHPEBKNIFB; // 0x20
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_CMOEFAFDIFJ_CBAAGJICGJB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_CMOEFAFDIFJ_CBAAGJICGJB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
