#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEnableGrenadierAttackAction; }

#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BAFB0)
#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BAFC0)
#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BAEE0)

namespace RPG::GameCore
{
	class FiveDimEnableGrenadierAttackAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
