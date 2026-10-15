#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSwapStyleConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0CA0)
#define RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0CB0)
#define RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSwapStyleConfig_TypeDefinitionIndex = 19714;

	class RogueActPersonaSwapStyleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSwapStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSwapStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSwapStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSwapStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASWAPSTYLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
