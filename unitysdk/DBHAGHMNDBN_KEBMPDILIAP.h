#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class DBHAGHMNDBN;
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DBHAGHMNDBN_KEBMPDILIAP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7DFF70)
#define DBHAGHMNDBN_KEBMPDILIAP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DBHAGHMNDBN_KEBMPDILIAP_TypeDefinitionIndex = 79762;

struct alignas(8) DBHAGHMNDBN_KEBMPDILIAP
{
	::DBHAGHMNDBN* KLHPEBKNIFB; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x8];
	::System::String* BJIELNAKFJG; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHAGHMNDBN_KEBMPDILIAP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DBHAGHMNDBN_KEBMPDILIAP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
