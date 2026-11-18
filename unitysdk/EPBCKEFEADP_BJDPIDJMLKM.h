#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class EPBCKEFEADP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EPBCKEFEADP_BJDPIDJMLKM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7259B0)
#define EPBCKEFEADP_BJDPIDJMLKM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EPBCKEFEADP_BJDPIDJMLKM_TypeDefinitionIndex = 89998;

struct alignas(8) EPBCKEFEADP_BJDPIDJMLKM
{
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter KIFJPEHBMCP; // 0x28
	::EPBCKEFEADP* KLHPEBKNIFB; // 0x38
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter IELMICFKAAI; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_BJDPIDJMLKM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_BJDPIDJMLKM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
