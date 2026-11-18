#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/MoleMole/FadeAnimationData.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMonsterFantasyRoleItemWidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CAA40)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController__PlayFadeInAnimation_d__38_TypeDefinitionIndex = 92629;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
	struct alignas(8) UIMonsterFantasyRoleItemWidgetController__PlayFadeInAnimation_d__38
	{
		::MoleMole::UIMonsterFantasyRoleItemWidgetController* __4__this; // 0x10
		::System::Threading::CancellationToken token; // 0x18
		::MoleMole::FadeAnimationData _fadeConfig_5__2; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::String* key; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Single _timeLeft_5__3; // 0x4C
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x50
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
