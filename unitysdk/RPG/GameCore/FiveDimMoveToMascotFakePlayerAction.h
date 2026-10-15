#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMoveToMascotFakePlayerAction; }

#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CD630)
#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CD640)
#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CD5C0)

namespace RPG::GameCore
{
	class FiveDimMoveToMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
