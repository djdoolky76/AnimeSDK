#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWFEVERTIPSDIALOG_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C5170)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWFEVERTIPSDIALOG_D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController__ShowFeverTipsDialog_d__24_TypeDefinitionIndex = 46772;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
	struct alignas(8) UICinemaSinglePlayWidgetController__ShowFeverTipsDialog_d__24
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x30
		::System::Single delayTime; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Boolean show; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWFEVERTIPSDIALOG_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWFEVERTIPSDIALOG_D__24_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
