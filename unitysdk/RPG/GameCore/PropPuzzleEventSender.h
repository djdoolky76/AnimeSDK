#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropPuzzleEventSender; }

#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D952240)
#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D952250)
#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D952210)

namespace RPG::GameCore
{
	class PropPuzzleEventSender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleEvent PuzzleEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleEventSender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleEventSender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
