#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_ED0909643A9386D8_AD8A550C559B6452_OFFSET UNITYSDK_OFFSET(0x3FA69B0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualSenseGamepadHID_ED0909643A9386D8_TypeDefinitionIndex = 14332;

	struct alignas(4) DualSenseGamepadHID_ED0909643A9386D8
	{
		::System::Byte F1E5C91CC90BA48C; // 0x10

		static ::AFB530854B88B5A8 AD8A550C559B6452()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_ED0909643A9386D8_AD8A550C559B6452_OFFSET))();
		}
	};
}
