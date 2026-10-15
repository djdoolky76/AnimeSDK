#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AbortTargetSkill; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ABORTTARGETSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33F710)
#define RPG_GAMECORE_ABORTTARGETSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33F720)
#define RPG_GAMECORE_ABORTTARGETSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33F6E0)

namespace RPG::GameCore
{
	class AbortTargetSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ResetToIdle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbortTargetSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbortTargetSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbortTargetSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbortTargetSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
