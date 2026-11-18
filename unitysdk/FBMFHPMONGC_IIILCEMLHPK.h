#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class EGIOHHJLFCH;
class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_IIILCEMLHPK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5F15C0)
#define FBMFHPMONGC_IIILCEMLHPK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_IIILCEMLHPK_TypeDefinitionIndex = 50498;

struct alignas(8) FBMFHPMONGC_IIILCEMLHPK
{
	::EGIOHHJLFCH* DIBJCGJHLHC; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x18
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Boolean CINLFPGCINL; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IIILCEMLHPK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IIILCEMLHPK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
