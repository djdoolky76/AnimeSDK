#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionPhase.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupMissionCondition; }

#define RPG_GAMECORE_LEVELGROUPMISSIONCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B1770)
#define RPG_GAMECORE_LEVELGROUPMISSIONCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B1620)

namespace RPG::GameCore
{
	class LevelGroupMissionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelGroupMissionType Type; // 0x10
		::RPG::GameCore::LevelGroupMissionPhase Phase; // 0x14
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupMissionCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupMissionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
