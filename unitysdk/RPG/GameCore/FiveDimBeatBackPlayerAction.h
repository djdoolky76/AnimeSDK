#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBeatBackPlayerAction; }

#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B34D0)
#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B34E0)
#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B3460)

namespace RPG::GameCore
{
	class FiveDimBeatBackPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
