#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class AIPAFAGLLGH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AIPAFAGLLGH_FBMHPHIMMII_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7280F0)
#define AIPAFAGLLGH_FBMHPHIMMII_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int AIPAFAGLLGH_FBMHPHIMMII_TypeDefinitionIndex = 70106;

struct alignas(8) AIPAFAGLLGH_FBMHPHIMMII
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::AIPAFAGLLGH* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_FBMHPHIMMII_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_FBMHPHIMMII_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
