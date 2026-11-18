#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"

class HPFCFDIOHPO;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HPFCFDIOHPO_AOIEFBGPPIJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x775860)
#define HPFCFDIOHPO_AOIEFBGPPIJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HPFCFDIOHPO_AOIEFBGPPIJ_TypeDefinitionIndex = 90622;

struct alignas(8) HPFCFDIOHPO_AOIEFBGPPIJ
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x18];
	::HPFCFDIOHPO* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Int32> ECODFICGLGM; // 0x38
	::System::Byte _padding1[0x10];
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFCFDIOHPO_AOIEFBGPPIJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HPFCFDIOHPO_AOIEFBGPPIJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
