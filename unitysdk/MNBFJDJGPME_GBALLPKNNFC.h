#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class MNBFJDJGPME;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MNBFJDJGPME_GBALLPKNNFC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AD370)
#define MNBFJDJGPME_GBALLPKNNFC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MNBFJDJGPME_GBALLPKNNFC_TypeDefinitionIndex = 77714;

struct alignas(8) MNBFJDJGPME_GBALLPKNNFC
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x8];
	::MNBFJDJGPME* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBFJDJGPME_GBALLPKNNFC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MNBFJDJGPME_GBALLPKNNFC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
