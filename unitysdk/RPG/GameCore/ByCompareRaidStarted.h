#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRaidStarted; }

#define RPG_GAMECORE_BYCOMPARERAIDSTARTED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CE340)
#define RPG_GAMECORE_BYCOMPARERAIDSTARTED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CE350)
#define RPG_GAMECORE_BYCOMPARERAIDSTARTED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CE300)

namespace RPG::GameCore
{
	class ByCompareRaidStarted : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRaidStarted* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRaidStarted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRaidStarted* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRaidStarted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERAIDSTARTED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
