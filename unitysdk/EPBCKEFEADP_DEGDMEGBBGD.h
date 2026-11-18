#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class EPBCKEFEADP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EPBCKEFEADP_DEGDMEGBBGD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6BF2D0)
#define EPBCKEFEADP_DEGDMEGBBGD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EPBCKEFEADP_DEGDMEGBBGD_TypeDefinitionIndex = 89999;

struct alignas(8) EPBCKEFEADP_DEGDMEGBBGD
{
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::EPBCKEFEADP* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter KIFJPEHBMCP; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40
	::UnityEngine::Vector3Int CMFHBLMALBN; // 0x44
	::System::Boolean HOKAJDGJHDP; // 0x50
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter IELMICFKAAI; // 0x51

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_DEGDMEGBBGD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_DEGDMEGBBGD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
