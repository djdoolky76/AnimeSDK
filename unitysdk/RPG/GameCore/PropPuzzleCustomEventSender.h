#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropPuzzleCustomEventSender; }

#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D951BE0)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D951BF0)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D951BB0)

namespace RPG::GameCore
{
	class PropPuzzleCustomEventSender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleCustomEvent Event; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleCustomEventSender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleCustomEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleCustomEventSender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleCustomEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
