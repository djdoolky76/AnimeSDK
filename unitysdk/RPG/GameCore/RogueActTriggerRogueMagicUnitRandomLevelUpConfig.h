#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMagicUnitRandomLevelUpConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2260)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A2270)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A2220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomLevelUpConfig_TypeDefinitionIndex = 19683;

	class RogueActTriggerRogueMagicUnitRandomLevelUpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
