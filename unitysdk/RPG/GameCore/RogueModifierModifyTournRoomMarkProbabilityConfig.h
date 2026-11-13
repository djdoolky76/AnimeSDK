#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyTournRoomMarkProbabilityConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207A2BF0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207A2C00)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207A2BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomMarkProbabilityConfig_TypeDefinitionIndex = 17942;

	class RogueModifierModifyTournRoomMarkProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyTournRoomMarkProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyTournRoomMarkProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyTournRoomMarkProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyTournRoomMarkProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
