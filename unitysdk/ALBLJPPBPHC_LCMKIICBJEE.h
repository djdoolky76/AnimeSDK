#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class ALBLJPPBPHC;
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ALBLJPPBPHC_LCMKIICBJEE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E0CD0)
#define ALBLJPPBPHC_LCMKIICBJEE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ALBLJPPBPHC_LCMKIICBJEE_TypeDefinitionIndex = 45840;

struct alignas(8) ALBLJPPBPHC_LCMKIICBJEE
{
	::System::String* BJIELNAKFJG; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x8];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::ALBLJPPBPHC* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_LCMKIICBJEE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_LCMKIICBJEE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
