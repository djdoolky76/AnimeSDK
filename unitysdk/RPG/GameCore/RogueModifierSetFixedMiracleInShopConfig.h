#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetFixedMiracleInShopConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ECE60)
#define RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9ECE70)
#define RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ECE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetFixedMiracleInShopConfig_TypeDefinitionIndex = 17786;

	class RogueModifierSetFixedMiracleInShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetFixedMiracleInShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetFixedMiracleInShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetFixedMiracleInShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetFixedMiracleInShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
