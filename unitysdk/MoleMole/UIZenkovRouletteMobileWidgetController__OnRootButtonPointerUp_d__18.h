#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIZenkovRouletteMobileWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER__ONROOTBUTTONPOINTERUP_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D5FA0)
#define MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER__ONROOTBUTTONPOINTERUP_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRouletteMobileWidgetController__OnRootButtonPointerUp_d__18_TypeDefinitionIndex = 42741;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	struct alignas(8) UIZenkovRouletteMobileWidgetController__OnRootButtonPointerUp_d__18
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::System::Object* __u__1; // 0x30
		::System::Byte _padding0[0x10];
		::MoleMole::UIZenkovRouletteMobileWidgetController* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER__ONROOTBUTTONPOINTERUP_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER__ONROOTBUTTONPOINTERUP_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
