#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/ValueType.h"

class LIADCALCDAC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LIADCALCDAC_KGJAKOEDGAN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x773C10)
#define LIADCALCDAC_KGJAKOEDGAN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LIADCALCDAC_KGJAKOEDGAN_TypeDefinitionIndex = 91495;

struct alignas(8) LIADCALCDAC_KGJAKOEDGAN
{
	::LGCNEDCMPKM BKBGPKNGNMF; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
	::LIADCALCDAC* KLHPEBKNIFB; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_KGJAKOEDGAN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LIADCALCDAC_KGJAKOEDGAN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
