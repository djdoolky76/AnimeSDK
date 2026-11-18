#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICoopLevelRewardRowWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONCLICKGETREWARD_ASYNC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76D360)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONCLICKGETREWARD_ASYNC_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController__OnClickGetReward_Async_d__11_TypeDefinitionIndex = 49931;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	struct alignas(8) UICoopLevelRewardRowWidgetController__OnClickGetReward_Async_d__11
	{
		::System::Object* __8__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::MoleMole::UICoopLevelRewardRowWidgetController* __4__this; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONCLICKGETREWARD_ASYNC_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONCLICKGETREWARD_ASYNC_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
