#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseScrollGameEndAction; }

#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B33F0)
#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B3400)
#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B3380)

namespace RPG::GameCore
{
	class FiveDimBaseScrollGameEndAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
