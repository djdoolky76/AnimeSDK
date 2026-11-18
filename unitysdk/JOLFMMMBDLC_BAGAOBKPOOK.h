#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class JOLFMMMBDLC;
class NGBFGIJANCG;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JOLFMMMBDLC_BAGAOBKPOOK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x823500)
#define JOLFMMMBDLC_BAGAOBKPOOK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int JOLFMMMBDLC_BAGAOBKPOOK_TypeDefinitionIndex = 91970;

struct alignas(8) JOLFMMMBDLC_BAGAOBKPOOK
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> IELMICFKAAI; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::NGBFGIJANCG*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::JOLFMMMBDLC* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLFMMMBDLC_BAGAOBKPOOK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JOLFMMMBDLC_BAGAOBKPOOK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
