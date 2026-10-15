#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetPropInteractBtnSwitch; }

#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABF840)
#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABF850)
#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABF810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropInteractBtnSwitch_TypeDefinitionIndex = 22020;

	class SetPropInteractBtnSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SwitchState; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropInteractBtnSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropInteractBtnSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropInteractBtnSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropInteractBtnSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
