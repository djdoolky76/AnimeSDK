#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceEnterStatePredicateConfig; }

#define RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B220)
#define RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54B230)
#define RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54EC00)

namespace RPG::GameCore
{
	class CakeRaceEnterStatePredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState AIState; // 0x18
		::System::Boolean EdgeTrigger; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
