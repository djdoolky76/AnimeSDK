#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMagicUnitSelectConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2320)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A2330)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A22E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectConfig_TypeDefinitionIndex = 19675;

	class RogueActTriggerRogueMagicUnitSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
