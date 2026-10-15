#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerRogueBuffEnhanceConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9744E0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9744F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9744A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffEnhanceConfig_TypeDefinitionIndex = 19585;

	class RogueActTriggerRogueBuffEnhanceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerRogueBuffEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFENHANCECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
