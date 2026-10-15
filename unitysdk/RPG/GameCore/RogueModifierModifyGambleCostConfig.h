#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyGambleCostConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17E40)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA17E50)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17E00)

namespace RPG::GameCore
{
	class RogueModifierModifyGambleCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyGambleCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyGambleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyGambleCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyGambleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYGAMBLECOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
