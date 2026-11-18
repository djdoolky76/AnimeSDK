#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class NOHGMPIMCEF;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NOHGMPIMCEF_GPKEDBBELIN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5A47C0)
#define NOHGMPIMCEF_GPKEDBBELIN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int NOHGMPIMCEF_GPKEDBBELIN_TypeDefinitionIndex = 90748;

struct alignas(8) NOHGMPIMCEF_GPKEDBBELIN
{
	::NOHGMPIMCEF* KLHPEBKNIFB; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding0[0x8];
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GPKEDBBELIN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GPKEDBBELIN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
