#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_MAFEHGPAJGM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C0A00)
#define ABJMPKENACD_MAFEHGPAJGM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_MAFEHGPAJGM_TypeDefinitionIndex = 88621;

struct alignas(8) ABJMPKENACD_MAFEHGPAJGM
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::ABJMPKENACD* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Boolean GDNECMBHKND; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_MAFEHGPAJGM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_MAFEHGPAJGM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
