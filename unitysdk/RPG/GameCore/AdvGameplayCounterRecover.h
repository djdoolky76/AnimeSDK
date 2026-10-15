#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGameplayCounterRecover; }

#define RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0260)
#define RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A0270)
#define RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A0230)

namespace RPG::GameCore
{
	class AdvGameplayCounterRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CounterID; // 0x18
		::System::UInt32 RecoverCounter; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayCounterRecover* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayCounterRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayCounterRecover* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayCounterRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
