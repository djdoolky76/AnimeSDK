#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIVHSStoreTagWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x74A9B0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTagWidgetController__PlayHighlightTagAnim_d__11_TypeDefinitionIndex = 83381;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	struct alignas(8) UIVHSStoreTagWidgetController__PlayHighlightTagAnim_d__11
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::UIVHSStoreTagWidgetController* __4__this; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Boolean highlight; // 0x38
		::System::Boolean skipAnim; // 0x39
		::System::Byte _padding0[0x2];
		::System::Int32 __1__state; // 0x3C
		::System::Single animDelayTime; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
