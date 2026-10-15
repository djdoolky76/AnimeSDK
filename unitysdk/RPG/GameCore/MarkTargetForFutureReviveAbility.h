#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarkTargetForFutureReviveAbility; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D849A90)
#define RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D849AA0)
#define RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D849A60)

namespace RPG::GameCore
{
	class MarkTargetForFutureReviveAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarkTargetForFutureReviveAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarkTargetForFutureReviveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarkTargetForFutureReviveAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarkTargetForFutureReviveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKTARGETFORFUTUREREVIVEABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
