#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelRoleHudWidgetChildWindowController_HpAnimDataBindView; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__PLAYHPDECREASEANIM_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E9850)
#define MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__PLAYHPDECREASEANIM_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRoleHudWidgetChildWindowController_HpAnimDataBindView__PlayHpDecreaseAnim_d__18_TypeDefinitionIndex = 44455;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	struct alignas(8) UIInLevelRoleHudWidgetChildWindowController_HpAnimDataBindView__PlayHpDecreaseAnim_d__18
	{
		::System::Object* __u__1; // 0x10
		::System::Byte _padding0[0x8];
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::MoleMole::UIInLevelRoleHudWidgetChildWindowController_HpAnimDataBindView* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__PLAYHPDECREASEANIM_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__PLAYHPDECREASEANIM_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
