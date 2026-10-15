#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierSpecifyGuidSkillListConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32750)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32760)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSpecifyGuidSkillListConfig_TypeDefinitionIndex = 18115;

	class TrainPartyModifierSpecifyGuidSkillListConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSpecifyGuidSkillListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSpecifyGuidSkillListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSpecifyGuidSkillListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSpecifyGuidSkillListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYGUIDSKILLLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
