#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueTitanBlessSelectConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D974D80)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D974D90)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D974D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueTitanBlessSelectConfig_TypeDefinitionIndex = 19699;

	class RogueActTriggerRogueTitanBlessSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
