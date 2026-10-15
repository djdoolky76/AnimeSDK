#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionTrigerAddMtSkillConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2D3B0)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2D3C0)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2D530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerAddMtSkillConfig_TypeDefinitionIndex = 18081;

	class TrainPartyActionTrigerAddMtSkillConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
