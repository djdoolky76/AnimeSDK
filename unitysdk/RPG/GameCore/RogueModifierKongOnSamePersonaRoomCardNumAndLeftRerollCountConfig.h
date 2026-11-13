#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077FC80)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077FC90)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077FC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig_TypeDefinitionIndex = 17990;

	class RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
