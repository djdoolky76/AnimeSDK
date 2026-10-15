#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimRefillPlayerJumpEnergyAction; }

#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D7200)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D7210)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7190)

namespace RPG::GameCore
{
	class FiveDimRefillPlayerJumpEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
