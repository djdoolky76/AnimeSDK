#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaGeneralStartTipsWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMAGENERALSTARTTIPSWIDGETCONTROLLER__PLAYENTERANIM_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C5160)
#define MOLEMOLE_UICINEMAGENERALSTARTTIPSWIDGETCONTROLLER__PLAYENTERANIM_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6C2D10)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaGeneralStartTipsWidgetController__PlayEnterAnim_d__6_TypeDefinitionIndex = 59039;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	struct alignas(8) UICinemaGeneralStartTipsWidgetController__PlayEnterAnim_d__6
	{
		::System::Object* __u__1; // 0x10
		::System::Byte _padding0[0x8];
		::System::Action* finishCallback; // 0x20
		::MoleMole::UICinemaGeneralStartTipsWidgetController* __4__this; // 0x28
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAGENERALSTARTTIPSWIDGETCONTROLLER__PLAYENTERANIM_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAGENERALSTARTTIPSWIDGETCONTROLLER__PLAYENTERANIM_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
