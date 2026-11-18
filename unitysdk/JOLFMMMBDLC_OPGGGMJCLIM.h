#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class EINCNIDEKPA;
class JOLFMMMBDLC;
class NGBFGIJANCG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JOLFMMMBDLC_OPGGGMJCLIM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x754360)
#define JOLFMMMBDLC_OPGGGMJCLIM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int JOLFMMMBDLC_OPGGGMJCLIM_TypeDefinitionIndex = 91968;

struct alignas(8) JOLFMMMBDLC_OPGGGMJCLIM
{
	::JOLFMMMBDLC* KLHPEBKNIFB; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::NGBFGIJANCG*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::EINCNIDEKPA* FCEIKAIDHPM; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::NGBFGIJANCG*> IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLFMMMBDLC_OPGGGMJCLIM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JOLFMMMBDLC_OPGGGMJCLIM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
