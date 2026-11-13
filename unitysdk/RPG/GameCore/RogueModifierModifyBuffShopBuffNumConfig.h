#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyBuffShopBuffNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20780540)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20780550)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20780500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBuffShopBuffNumConfig_TypeDefinitionIndex = 18102;

	class RogueModifierModifyBuffShopBuffNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
