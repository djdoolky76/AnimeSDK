#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSpecialClonePumanCardConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0BE0)
#define RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0BF0)
#define RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSpecialClonePumanCardConfig_TypeDefinitionIndex = 19785;

	class RogueActPersonaSpecialClonePumanCardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSpecialClonePumanCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSpecialClonePumanCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSpecialClonePumanCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSpecialClonePumanCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
