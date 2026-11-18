#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class CJHAOHLEIKC_EKADAHGAODD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CJHAOHLEIKC_EKADAHGAODD_FLADPHILOPP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76D4E0)
#define CJHAOHLEIKC_EKADAHGAODD_FLADPHILOPP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int CJHAOHLEIKC_EKADAHGAODD_FLADPHILOPP_TypeDefinitionIndex = 86480;

struct alignas(8) CJHAOHLEIKC_EKADAHGAODD_FLADPHILOPP
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> IELMICFKAAI; // 0x30
	::CJHAOHLEIKC_EKADAHGAODD* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_EKADAHGAODD_FLADPHILOPP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_EKADAHGAODD_FLADPHILOPP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
