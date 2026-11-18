#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIAbyssS2EntrancePageController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x746B10)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController__TryShowTipsWithUniTask_d__14_TypeDefinitionIndex = 60685;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	struct alignas(8) UIAbyssS2EntrancePageController__TryShowTipsWithUniTask_d__14
	{
		::MoleMole::UIAbyssS2EntrancePageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::System::Object* __u__2; // 0x48
		::System::Byte _padding0[0x8];
		::System::Int32 _reminderID_5__2; // 0x58
		::System::Boolean hasWidget; // 0x5C
		::System::Byte _padding1[0x3];
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
