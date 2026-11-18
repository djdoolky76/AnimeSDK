#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIActivityHotpotWaveItemWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER__PLAYANIMANDCLOSE_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7EC1B0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER__PLAYANIMANDCLOSE_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotWaveItemWidgetController__PlayAnimAndClose_d__9_TypeDefinitionIndex = 53580;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	struct alignas(8) UIActivityHotpotWaveItemWidgetController__PlayAnimAndClose_d__9
	{
		::MoleMole::UIActivityHotpotWaveItemWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::System::Object* __u__1; // 0x28
		::System::Byte _padding0[0x8];
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER__PLAYANIMANDCLOSE_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER__PLAYANIMANDCLOSE_D__9_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
