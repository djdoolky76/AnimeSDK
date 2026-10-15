#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGrenadierAttackAction; }

#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2C90)
#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C2CA0)
#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C2C20)

namespace RPG::GameCore
{
	class FiveDimGrenadierAttackAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGrenadierAttackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGrenadierAttackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
