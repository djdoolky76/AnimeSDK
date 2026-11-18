#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class NGBFGIJANCG;
class OMCNHOEHKPJ;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OMCNHOEHKPJ_JNMEECKAEOC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x794EE0)
#define OMCNHOEHKPJ_JNMEECKAEOC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3C0A10)

inline static constexpr unsigned int OMCNHOEHKPJ_JNMEECKAEOC_TypeDefinitionIndex = 47648;

struct alignas(8) OMCNHOEHKPJ_JNMEECKAEOC
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::NGBFGIJANCG*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Runtime::CompilerServices::TaskAwaiter_1<::NGBFGIJANCG*> IELMICFKAAI; // 0x28
	::System::String* MCOHLHMKLIP; // 0x30
	::OMCNHOEHKPJ* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNHOEHKPJ_JNMEECKAEOC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OMCNHOEHKPJ_JNMEECKAEOC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
