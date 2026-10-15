#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionTrigerSelectPassengerSkillConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFFB20)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBFFB30)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFFCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerSelectPassengerSkillConfig_TypeDefinitionIndex = 18079;

	class TrainPartyActionTrigerSelectPassengerSkillConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
