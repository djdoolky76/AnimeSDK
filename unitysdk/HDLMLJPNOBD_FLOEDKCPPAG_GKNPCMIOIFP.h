#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class HDLMLJPNOBD_FLOEDKCPPAG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HDLMLJPNOBD_FLOEDKCPPAG_GKNPCMIOIFP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B38D0)
#define HDLMLJPNOBD_FLOEDKCPPAG_GKNPCMIOIFP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HDLMLJPNOBD_FLOEDKCPPAG_GKNPCMIOIFP_TypeDefinitionIndex = 38705;

struct alignas(8) HDLMLJPNOBD_FLOEDKCPPAG_GKNPCMIOIFP
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::HDLMLJPNOBD_FLOEDKCPPAG* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single IGEDHCLLJNN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_FLOEDKCPPAG_GKNPCMIOIFP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_FLOEDKCPPAG_GKNPCMIOIFP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
