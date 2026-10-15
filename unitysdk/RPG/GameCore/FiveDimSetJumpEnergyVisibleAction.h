#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetJumpEnergyVisibleAction; }

#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D9B20)
#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D9B30)
#define RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D9AB0)

namespace RPG::GameCore
{
	class FiveDimSetJumpEnergyVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETJUMPENERGYVISIBLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
