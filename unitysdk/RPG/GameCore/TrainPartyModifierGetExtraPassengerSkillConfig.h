#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierGetExtraPassengerSkillConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE458B0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE458C0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE45AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierGetExtraPassengerSkillConfig_TypeDefinitionIndex = 18272;

	class TrainPartyModifierGetExtraPassengerSkillConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierGetExtraPassengerSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierGetExtraPassengerSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierGetExtraPassengerSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierGetExtraPassengerSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
