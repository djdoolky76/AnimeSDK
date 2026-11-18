#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class BPCBGBDIFDE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BPCBGBDIFDE_AOCLIJIJCCI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x67F870)
#define BPCBGBDIFDE_AOCLIJIJCCI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BPCBGBDIFDE_AOCLIJIJCCI_TypeDefinitionIndex = 78663;

struct alignas(8) BPCBGBDIFDE_AOCLIJIJCCI
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x30
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_AOCLIJIJCCI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_AOCLIJIJCCI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
