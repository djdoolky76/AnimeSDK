#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueShopConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A060)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A070)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueShopConfig_TypeDefinitionIndex = 17703;

	class RogueModifierReplaceContentRogueShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
