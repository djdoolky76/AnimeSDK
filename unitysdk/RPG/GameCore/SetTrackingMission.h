#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTrackingMission; }

#define RPG_GAMECORE_SETTRACKINGMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC8860)
#define RPG_GAMECORE_SETTRACKINGMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC8870)
#define RPG_GAMECORE_SETTRACKINGMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC8830)

namespace RPG::GameCore
{
	class SetTrackingMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTrackingMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTrackingMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
