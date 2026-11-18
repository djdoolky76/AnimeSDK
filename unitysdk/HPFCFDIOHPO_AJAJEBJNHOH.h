#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class HPFCFDIOHPO;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HPFCFDIOHPO_AJAJEBJNHOH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x773900)
#define HPFCFDIOHPO_AJAJEBJNHOH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HPFCFDIOHPO_AJAJEBJNHOH_TypeDefinitionIndex = 90623;

struct alignas(8) HPFCFDIOHPO_AJAJEBJNHOH
{
	::HPFCFDIOHPO* KLHPEBKNIFB; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x8];
	::System::Object* KIFJPEHBMCP; // 0x28
	::System::Byte _padding1[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Int32 CAPIHGAFJCA; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFCFDIOHPO_AJAJEBJNHOH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HPFCFDIOHPO_AJAJEBJNHOH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
