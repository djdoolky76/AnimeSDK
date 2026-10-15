#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyShopPricePartiallyOnGenConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18A40)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18A50)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18A00)

namespace RPG::GameCore
{
	class RogueModifierModifyShopPricePartiallyOnGenConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyShopPricePartiallyOnGenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyShopPricePartiallyOnGenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyShopPricePartiallyOnGenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyShopPricePartiallyOnGenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPPRICEPARTIALLYONGENCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
