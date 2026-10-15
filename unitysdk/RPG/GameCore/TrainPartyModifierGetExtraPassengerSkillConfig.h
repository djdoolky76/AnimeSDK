#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierGetExtraPassengerSkillConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32610)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32620)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETEXTRAPASSENGERSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierGetExtraPassengerSkillConfig_TypeDefinitionIndex = 18110;

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
