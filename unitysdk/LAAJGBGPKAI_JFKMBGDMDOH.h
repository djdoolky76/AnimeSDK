#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LAAJGBGPKAI_JFKMBGDMDOH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EC7F0)
#define LAAJGBGPKAI_JFKMBGDMDOH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LAAJGBGPKAI_JFKMBGDMDOH_TypeDefinitionIndex = 84455;

struct alignas(8) LAAJGBGPKAI_JFKMBGDMDOH
{
	::System::Action* NPFIONPDFED; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::Cysharp::Threading::Tasks::UniTask DBLNHELEFFG; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Boolean HFANICLMHMK; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_JFKMBGDMDOH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_JFKMBGDMDOH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
