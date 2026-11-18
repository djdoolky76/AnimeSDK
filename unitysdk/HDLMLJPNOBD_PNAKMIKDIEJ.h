#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class HDLMLJPNOBD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HDLMLJPNOBD_PNAKMIKDIEJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x773180)
#define HDLMLJPNOBD_PNAKMIKDIEJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HDLMLJPNOBD_PNAKMIKDIEJ_TypeDefinitionIndex = 38702;

struct alignas(8) HDLMLJPNOBD_PNAKMIKDIEJ
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::HDLMLJPNOBD* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_PNAKMIKDIEJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_PNAKMIKDIEJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
