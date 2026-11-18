#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class HPFCFDIOHPO;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HPFCFDIOHPO_DBPLFHBFAOI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79F4A0)
#define HPFCFDIOHPO_DBPLFHBFAOI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HPFCFDIOHPO_DBPLFHBFAOI_TypeDefinitionIndex = 90621;

struct alignas(8) HPFCFDIOHPO_DBPLFHBFAOI
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::HPFCFDIOHPO* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Boolean OBOKOLAKJAG; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFCFDIOHPO_DBPLFHBFAOI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HPFCFDIOHPO_DBPLFHBFAOI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
