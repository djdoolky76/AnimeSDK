#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityStart; }
namespace RPG::GameCore { class ChimeraPhaseConditionConfig; }
namespace RPG::GameCore { class ChimeraWorkPhase; }

#define RPG_GAMECORE_CHIMERAWORKPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B1840)
#define RPG_GAMECORE_CHIMERAWORKPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B1760)

namespace RPG::GameCore
{
	class ChimeraWorkPhase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraAbilityStart* PhasePerformance; // 0x10
		::RPG::GameCore::ChimeraPhaseConditionConfig* Condition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
