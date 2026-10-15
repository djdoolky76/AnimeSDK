#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelGroupAtmosphereLoadCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupMissionSavedValueCondition; }
namespace RPG::GameCore { class MissionCustomValue; }

#define RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D781AA0)
#define RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D781AB0)
#define RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D783D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMissionSavedValueCondition_TypeDefinitionIndex = 17214;

	class LevelGroupMissionSavedValueCondition : public ::RPG::GameCore::LevelGroupAtmosphereLoadCondition
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MissionCustomValue* MissionSavedValue; // 0x18
		::RPG::GameCore::CompareType Operation; // 0x20
		::System::UInt32 Value; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupMissionSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupMissionSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupMissionSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupMissionSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
