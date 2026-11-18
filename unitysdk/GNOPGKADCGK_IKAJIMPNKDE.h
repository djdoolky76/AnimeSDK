#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class GNOPGKADCGK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GNOPGKADCGK_IKAJIMPNKDE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E0560)
#define GNOPGKADCGK_IKAJIMPNKDE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNOPGKADCGK_IKAJIMPNKDE_TypeDefinitionIndex = 91634;

struct alignas(8) GNOPGKADCGK_IKAJIMPNKDE
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::GNOPGKADCGK* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOPGKADCGK_IKAJIMPNKDE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNOPGKADCGK_IKAJIMPNKDE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
