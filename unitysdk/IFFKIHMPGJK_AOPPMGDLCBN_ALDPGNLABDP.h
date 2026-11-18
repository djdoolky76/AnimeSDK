#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class IFFKIHMPGJK_AOPPMGDLCBN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IFFKIHMPGJK_AOPPMGDLCBN_ALDPGNLABDP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7907C0)
#define IFFKIHMPGJK_AOPPMGDLCBN_ALDPGNLABDP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IFFKIHMPGJK_AOPPMGDLCBN_ALDPGNLABDP_TypeDefinitionIndex = 66902;

struct alignas(8) IFFKIHMPGJK_AOPPMGDLCBN_ALDPGNLABDP
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::IFFKIHMPGJK_AOPPMGDLCBN* KLHPEBKNIFB; // 0x20
	::System::Int32 HFDNIDBIDON; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x2C
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_AOPPMGDLCBN_ALDPGNLABDP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_AOPPMGDLCBN_ALDPGNLABDP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
