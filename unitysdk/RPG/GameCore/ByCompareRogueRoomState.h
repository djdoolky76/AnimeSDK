#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRogueRoomState; }

#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D0230)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D0240)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D01F0)

namespace RPG::GameCore
{
	class ByCompareRogueRoomState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueRoomState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueRoomState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueRoomState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueRoomState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
