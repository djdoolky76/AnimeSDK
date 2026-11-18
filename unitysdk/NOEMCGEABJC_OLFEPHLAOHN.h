#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class NGBFGIJANCG;
class NOEMCGEABJC;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NOEMCGEABJC_OLFEPHLAOHN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x596070)
#define NOEMCGEABJC_OLFEPHLAOHN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int NOEMCGEABJC_OLFEPHLAOHN_TypeDefinitionIndex = 41596;

struct alignas(8) NOEMCGEABJC_OLFEPHLAOHN
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::NGBFGIJANCG*> IELMICFKAAI; // 0x10
	::System::String* MCOHLHMKLIP; // 0x18
	::NOEMCGEABJC* KLHPEBKNIFB; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEMCGEABJC_OLFEPHLAOHN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_OLFEPHLAOHN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
