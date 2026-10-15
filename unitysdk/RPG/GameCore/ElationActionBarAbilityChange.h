#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationActionBarAbilityChange; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D631910)
#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D631920)
#define RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6318D0)

namespace RPG::GameCore
{
	class ElationActionBarAbilityChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean IsAdd; // 0x20
		::System::Boolean AddToFirst; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationActionBarAbilityChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationActionBarAbilityChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIONBARABILITYCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
