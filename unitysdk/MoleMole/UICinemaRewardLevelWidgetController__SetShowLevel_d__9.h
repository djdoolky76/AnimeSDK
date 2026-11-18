#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaRewardLevelWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__SETSHOWLEVEL_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A13F0)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__SETSHOWLEVEL_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardLevelWidgetController__SetShowLevel_d__9_TypeDefinitionIndex = 65286;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	struct alignas(8) UICinemaRewardLevelWidgetController__SetShowLevel_d__9
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::UICinemaRewardLevelWidgetController* __4__this; // 0x28
		::System::Int32 level; // 0x30
		::System::Boolean isGold; // 0x34
		::System::Boolean hasEffect; // 0x35
		::System::Byte _padding0[0x2];
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__SETSHOWLEVEL_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__SETSHOWLEVEL_D__9_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
