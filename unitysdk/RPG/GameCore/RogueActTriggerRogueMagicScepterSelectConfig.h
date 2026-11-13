#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueMagicScepterSelectConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F559EA0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F559EB0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F559E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicScepterSelectConfig_TypeDefinitionIndex = 20019;

	class RogueActTriggerRogueMagicScepterSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
