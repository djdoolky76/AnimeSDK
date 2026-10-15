#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEnableSimpleHitBoxAction; }

#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB320)
#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BB330)
#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BB250)

namespace RPG::GameCore
{
	class FiveDimEnableSimpleHitBoxAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
