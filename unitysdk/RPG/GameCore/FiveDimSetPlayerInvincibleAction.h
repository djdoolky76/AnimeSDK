#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetPlayerInvincibleAction; }

#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DA0A0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DA0B0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DA060)

namespace RPG::GameCore
{
	class FiveDimSetPlayerInvincibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x14
		::System::Boolean OverrideMaxSpeedMultiplier; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single MaxSpeedMultiplier; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
