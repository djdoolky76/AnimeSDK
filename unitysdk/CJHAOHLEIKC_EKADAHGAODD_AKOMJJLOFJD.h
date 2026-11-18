#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class CJHAOHLEIKC_EKADAHGAODD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CJHAOHLEIKC_EKADAHGAODD_AKOMJJLOFJD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E9160)
#define CJHAOHLEIKC_EKADAHGAODD_AKOMJJLOFJD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int CJHAOHLEIKC_EKADAHGAODD_AKOMJJLOFJD_TypeDefinitionIndex = 86481;

struct alignas(8) CJHAOHLEIKC_EKADAHGAODD_AKOMJJLOFJD
{
	::CJHAOHLEIKC_EKADAHGAODD* KLHPEBKNIFB; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> IELMICFKAAI; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_EKADAHGAODD_AKOMJJLOFJD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_EKADAHGAODD_AKOMJJLOFJD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
