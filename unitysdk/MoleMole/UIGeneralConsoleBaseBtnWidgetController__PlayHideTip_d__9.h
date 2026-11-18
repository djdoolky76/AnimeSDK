#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIGeneralConsoleBaseBtnWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__PLAYHIDETIP_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D8450)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__PLAYHIDETIP_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralConsoleBaseBtnWidgetController__PlayHideTip_d__9_TypeDefinitionIndex = 90326;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	struct alignas(8) UIGeneralConsoleBaseBtnWidgetController__PlayHideTip_d__9
	{
		::System::Object* __u__1; // 0x10
		::System::Byte _padding0[0x8];
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x20
		::MoleMole::UIGeneralConsoleBaseBtnWidgetController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__PLAYHIDETIP_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__PLAYHIDETIP_D__9_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
