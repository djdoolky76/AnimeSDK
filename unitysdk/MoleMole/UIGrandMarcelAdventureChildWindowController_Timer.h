#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FGCOIBFFCHB;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoDigitConfig; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_TIMER_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x7F68D0)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_TIMER_SETTIME_OFFSET UNITYSDK_OFFSET(0x7F6930)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventureChildWindowController_Timer_TypeDefinitionIndex = 80389;

	struct alignas(8) UIGrandMarcelAdventureChildWindowController_Timer
	{
		::UnityEngine::GameObject* Root; // 0x10
		::FGCOIBFFCHB* MinuteHigh; // 0x18
		::FGCOIBFFCHB* MinuteLow; // 0x20
		::FGCOIBFFCHB* SecondHigh; // 0x28
		::FGCOIBFFCHB* SecondLow; // 0x30

		::System::Void SafeSetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_TIMER_SAFESETACTIVE_OFFSET))(this, value);
		}

		::System::Void SetTime(::System::Int32 seconds, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig* monoDigit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_TIMER_SETTIME_OFFSET))(this, seconds, monoDigit);
		}
	};
}
