#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyTournRoomProbabilityConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18CE0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18CF0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomProbabilityConfig_TypeDefinitionIndex = 17772;

	class RogueModifierModifyTournRoomProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
