#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class PMGMBGFOFKG_EKDKDNBAPIG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PMGMBGFOFKG_EKDKDNBAPIG_JENLDLJEBGK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70AD50)
#define PMGMBGFOFKG_EKDKDNBAPIG_JENLDLJEBGK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PMGMBGFOFKG_EKDKDNBAPIG_JENLDLJEBGK_TypeDefinitionIndex = 65875;

struct alignas(8) PMGMBGFOFKG_EKDKDNBAPIG_JENLDLJEBGK
{
	::PMGMBGFOFKG_EKDKDNBAPIG* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_EKDKDNBAPIG_JENLDLJEBGK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_EKDKDNBAPIG_JENLDLJEBGK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
