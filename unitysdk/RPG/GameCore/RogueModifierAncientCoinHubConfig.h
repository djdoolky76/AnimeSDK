#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierAncientCoinHubConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AFB40)
#define RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9AFB50)
#define RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AFB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAncientCoinHubConfig_TypeDefinitionIndex = 17807;

	class RogueModifierAncientCoinHubConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAncientCoinHubConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAncientCoinHubConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAncientCoinHubConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAncientCoinHubConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
