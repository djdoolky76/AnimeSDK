#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRandomActionConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A1D20)
#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A1D30)
#define RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A1CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRandomActionConfig_TypeDefinitionIndex = 19701;

	class RogueActTriggerRandomActionConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRandomActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRandomActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRandomActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRandomActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERRANDOMACTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
