#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17100)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA17110)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA170C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig_TypeDefinitionIndex = 17822;

	class RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndContinualNotKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDCONTINUALNOTKONGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
