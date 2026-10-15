#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGroupAtmosphereLoadCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupAtmosphereMainMissionCompleteCondition; }

#define RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AF310)
#define RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AF320)
#define RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AF8D0)

namespace RPG::GameCore
{
	class LevelGroupAtmosphereMainMissionCompleteCondition : public ::RPG::GameCore::LevelGroupAtmosphereLoadCondition
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
