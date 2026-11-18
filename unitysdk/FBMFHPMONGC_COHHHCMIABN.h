#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_COHHHCMIABN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x744ED0)
#define FBMFHPMONGC_COHHHCMIABN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_COHHHCMIABN_TypeDefinitionIndex = 50497;

struct alignas(8) FBMFHPMONGC_COHHHCMIABN
{
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single LJNNGMIANKH; // 0x3C
	::System::Single FNIOPKPHDEH; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_COHHHCMIABN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_COHHHCMIABN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
