#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitTrackingMission; }

#define RPG_GAMECORE_WAITTRACKINGMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC75FF0)
#define RPG_GAMECORE_WAITTRACKINGMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC76000)
#define RPG_GAMECORE_WAITTRACKINGMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC75FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTrackingMission_TypeDefinitionIndex = 21160;

	class WaitTrackingMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitEqual; // 0x18
		::System::Boolean UseGroupOwnerMission; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 MainMissionID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRACKINGMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTrackingMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRACKINGMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTrackingMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRACKINGMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
