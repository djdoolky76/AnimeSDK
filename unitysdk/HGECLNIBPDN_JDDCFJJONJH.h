#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class HGECLNIBPDN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HGECLNIBPDN_JDDCFJJONJH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x748A10)
#define HGECLNIBPDN_JDDCFJJONJH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HGECLNIBPDN_JDDCFJJONJH_TypeDefinitionIndex = 77015;

struct alignas(8) HGECLNIBPDN_JDDCFJJONJH
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::HGECLNIBPDN* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGECLNIBPDN_JDDCFJJONJH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HGECLNIBPDN_JDDCFJJONJH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
