#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISwitchTeamInFightQTEButtonChildWindowController; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISWITCHTEAMINFIGHTQTEBUTTONCHILDWINDOWCONTROLLER__PLAYHIDEANIMATION_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x74A9A0)
#define MOLEMOLE_UISWITCHTEAMINFIGHTQTEBUTTONCHILDWINDOWCONTROLLER__PLAYHIDEANIMATION_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchTeamInFightQTEButtonChildWindowController__PlayHideAnimation_d__14_TypeDefinitionIndex = 74800;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	struct alignas(8) UISwitchTeamInFightQTEButtonChildWindowController__PlayHideAnimation_d__14
	{
		::System::Action* callback; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::MoleMole::UISwitchTeamInFightQTEButtonChildWindowController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMINFIGHTQTEBUTTONCHILDWINDOWCONTROLLER__PLAYHIDEANIMATION_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMINFIGHTQTEBUTTONCHILDWINDOWCONTROLLER__PLAYHIDEANIMATION_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
