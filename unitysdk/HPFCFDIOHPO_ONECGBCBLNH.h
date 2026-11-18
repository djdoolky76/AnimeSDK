#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class HPFCFDIOHPO;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HPFCFDIOHPO_ONECGBCBLNH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5B4B20)
#define HPFCFDIOHPO_ONECGBCBLNH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HPFCFDIOHPO_ONECGBCBLNH_TypeDefinitionIndex = 90620;

struct alignas(8) HPFCFDIOHPO_ONECGBCBLNH
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::HPFCFDIOHPO* KLHPEBKNIFB; // 0x18
	::System::Object* IELMICFKAAI; // 0x20
	::System::Byte _padding0[0x18];
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFCFDIOHPO_ONECGBCBLNH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HPFCFDIOHPO_ONECGBCBLNH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
