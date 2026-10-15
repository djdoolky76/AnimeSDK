#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetPlayerSkillUpgradeAction; }

#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ACC50)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ACC60)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ACB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerSkillUpgradeAction_TypeDefinitionIndex = 18753;

	class FiveDimSetPlayerSkillUpgradeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Upgraded; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
