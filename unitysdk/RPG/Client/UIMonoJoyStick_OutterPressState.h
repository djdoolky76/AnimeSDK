#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIMonoJoyStick; }

#define RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x175A1010)
#define RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x175A1060)
#define RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x175A1180)
#define RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x175A1100)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMonoJoyStick_OutterPressState_TypeDefinitionIndex = 74913;

	class UIMonoJoyStick_OutterPressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::UIMonoJoyStick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::UIMonoJoyStick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_OUTTERPRESSSTATE_EXIT_OFFSET))(this);
		}

	};
}
