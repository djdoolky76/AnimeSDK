#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMagicUnitSelectDropConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F55A1A0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F55A1B0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F55A160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectDropConfig_TypeDefinitionIndex = 20012;

	class RogueActTriggerRogueMagicUnitSelectDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTDROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
