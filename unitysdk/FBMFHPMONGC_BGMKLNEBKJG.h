#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CELNNCEAKGB;
class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_BGMKLNEBKJG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6BF3F0)
#define FBMFHPMONGC_BGMKLNEBKJG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_BGMKLNEBKJG_TypeDefinitionIndex = 50473;

struct alignas(8) FBMFHPMONGC_BGMKLNEBKJG
{
	::CELNNCEAKGB* KNIDCNLAFMM; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x40
	::System::Single PJNMMCEGENN; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BGMKLNEBKJG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BGMKLNEBKJG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
