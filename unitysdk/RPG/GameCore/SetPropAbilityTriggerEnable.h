#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetPropAbilityTriggerEnable; }

#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABF390)
#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABF3A0)
#define RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABF350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropAbilityTriggerEnable_TypeDefinitionIndex = 20355;

	class SetPropAbilityTriggerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropAbilityTriggerEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropAbilityTriggerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropAbilityTriggerEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropAbilityTriggerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPABILITYTRIGGERENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
