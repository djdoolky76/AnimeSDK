#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetPreUseSkillLevelGraphOPApplyTiming; }

#define RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABF090)
#define RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABF0A0)
#define RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABF060)

namespace RPG::GameCore
{
	class SetPreUseSkillLevelGraphOPApplyTiming : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPREUSESKILLLEVELGRAPHOPAPPLYTIMING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
