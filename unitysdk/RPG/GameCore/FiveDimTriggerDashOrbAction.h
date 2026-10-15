#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTriggerDashOrbAction; }

#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E1720)
#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E1730)
#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E16B0)

namespace RPG::GameCore
{
	class FiveDimTriggerDashOrbAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
