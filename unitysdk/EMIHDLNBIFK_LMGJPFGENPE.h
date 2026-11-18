#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EMIHDLNBIFK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EMIHDLNBIFK_LMGJPFGENPE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6BF2C0)
#define EMIHDLNBIFK_LMGJPFGENPE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EMIHDLNBIFK_LMGJPFGENPE_TypeDefinitionIndex = 58415;

struct alignas(8) EMIHDLNBIFK_LMGJPFGENPE
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::EMIHDLNBIFK* KLHPEBKNIFB; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIHDLNBIFK_LMGJPFGENPE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EMIHDLNBIFK_LMGJPFGENPE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
