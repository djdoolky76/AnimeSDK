#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierTitanBlessAnaxaConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED1C0)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9ED1D0)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ED180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierTitanBlessAnaxaConfig_TypeDefinitionIndex = 17760;

	class RogueModifierTitanBlessAnaxaConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierTitanBlessAnaxaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierTitanBlessAnaxaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierTitanBlessAnaxaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierTitanBlessAnaxaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
