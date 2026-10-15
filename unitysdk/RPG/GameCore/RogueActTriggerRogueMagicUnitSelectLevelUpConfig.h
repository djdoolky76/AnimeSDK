#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMagicUnitSelectLevelUpConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2440)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A2450)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A2400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectLevelUpConfig_TypeDefinitionIndex = 19682;

	class RogueActTriggerRogueMagicUnitSelectLevelUpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
