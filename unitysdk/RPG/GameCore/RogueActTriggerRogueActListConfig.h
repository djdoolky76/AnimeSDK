#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueActListConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F559B40)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F559B50)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F559B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueActListConfig_TypeDefinitionIndex = 19977;

	class RogueActTriggerRogueActListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueActListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueActListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueActListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueActListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
