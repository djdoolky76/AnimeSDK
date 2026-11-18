#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class FOJONDIPFFL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PKFPGAPLFLA_AFJCCLNPHHF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75C8E0)
#define PKFPGAPLFLA_AFJCCLNPHHF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PKFPGAPLFLA_AFJCCLNPHHF_TypeDefinitionIndex = 80305;

struct alignas(8) PKFPGAPLFLA_AFJCCLNPHHF
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::FOJONDIPFFL* FGADDIJOOBH; // 0x20
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x28
	::HOCDHMEPPEG NPFIONPDFED; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x60
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_AFJCCLNPHHF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_AFJCCLNPHHF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
