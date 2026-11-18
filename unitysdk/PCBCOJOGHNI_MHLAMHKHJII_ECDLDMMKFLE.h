#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class PCBCOJOGHNI_MHLAMHKHJII;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PCBCOJOGHNI_MHLAMHKHJII_ECDLDMMKFLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A0110)
#define PCBCOJOGHNI_MHLAMHKHJII_ECDLDMMKFLE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PCBCOJOGHNI_MHLAMHKHJII_ECDLDMMKFLE_TypeDefinitionIndex = 48405;

struct alignas(8) PCBCOJOGHNI_MHLAMHKHJII_ECDLDMMKFLE
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Threading::CancellationToken MPPGOFIIMEM; // 0x20
	::PCBCOJOGHNI_MHLAMHKHJII* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBCOJOGHNI_MHLAMHKHJII_ECDLDMMKFLE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PCBCOJOGHNI_MHLAMHKHJII_ECDLDMMKFLE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
