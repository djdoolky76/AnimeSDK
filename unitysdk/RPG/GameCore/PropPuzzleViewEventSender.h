#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleViewEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropPuzzleViewEventSender; }

#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D952570)
#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D952580)
#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D952530)

namespace RPG::GameCore
{
	class PropPuzzleViewEventSender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleViewEvent ViewEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleViewEventSender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleViewEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleViewEventSender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleViewEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
