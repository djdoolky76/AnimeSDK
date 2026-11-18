#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIActivityHotpotFoodItemWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLER__PLAYEFFECTCOOKEDINTERNAL_D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FF320)
#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLER__PLAYEFFECTCOOKEDINTERNAL_D__45_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotFoodItemWidgetController__PlayEffectCookedInternal_d__45_TypeDefinitionIndex = 61506;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45>
	struct alignas(8) UIActivityHotpotFoodItemWidgetController__PlayEffectCookedInternal_d__45
	{
		::System::Object* __u__1; // 0x10
		::System::Byte _padding0[0x8];
		::MoleMole::UIActivityHotpotFoodItemWidgetController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLER__PLAYEFFECTCOOKEDINTERNAL_D__45_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLER__PLAYEFFECTCOOKEDINTERNAL_D__45_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
