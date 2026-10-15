#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAddInProgressStyleExpConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E7C0)
#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E7D0)
#define RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddInProgressStyleExpConfig_TypeDefinitionIndex = 19711;

	class RogueActPersonaAddInProgressStyleExpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAddInProgressStyleExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDINPROGRESSSTYLEEXPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
