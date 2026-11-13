#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTriggerDashOrbAction; }

#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A7940)
#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F7A7950)
#define RPG_GAMECORE_FIVEDIMTRIGGERDASHORBACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7A78D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerDashOrbAction_TypeDefinitionIndex = 18925;

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
