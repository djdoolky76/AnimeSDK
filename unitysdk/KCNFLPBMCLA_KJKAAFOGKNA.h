#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KCNFLPBMCLA_KJKAAFOGKNA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F78C0)
#define KCNFLPBMCLA_KJKAAFOGKNA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KCNFLPBMCLA_KJKAAFOGKNA_TypeDefinitionIndex = 49496;

struct alignas(8) KCNFLPBMCLA_KJKAAFOGKNA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Action* PFDKJAHMNIF; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNFLPBMCLA_KJKAAFOGKNA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KCNFLPBMCLA_KJKAAFOGKNA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
