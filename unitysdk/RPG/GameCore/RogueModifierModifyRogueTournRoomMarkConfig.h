#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyRogueTournRoomMarkConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18800)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18810)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA187C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyRogueTournRoomMarkConfig_TypeDefinitionIndex = 17775;

	class RogueModifierModifyRogueTournRoomMarkConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyRogueTournRoomMarkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyRogueTournRoomMarkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyRogueTournRoomMarkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyRogueTournRoomMarkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
