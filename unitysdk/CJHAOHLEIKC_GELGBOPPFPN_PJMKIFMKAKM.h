#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class CJHAOHLEIKC_GELGBOPPFPN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CJHAOHLEIKC_GELGBOPPFPN_PJMKIFMKAKM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x67F880)
#define CJHAOHLEIKC_GELGBOPPFPN_PJMKIFMKAKM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int CJHAOHLEIKC_GELGBOPPFPN_PJMKIFMKAKM_TypeDefinitionIndex = 86475;

struct alignas(8) CJHAOHLEIKC_GELGBOPPFPN_PJMKIFMKAKM
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> IELMICFKAAI; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::CJHAOHLEIKC_GELGBOPPFPN* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_GELGBOPPFPN_PJMKIFMKAKM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_GELGBOPPFPN_PJMKIFMKAKM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
