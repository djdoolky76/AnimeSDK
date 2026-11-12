#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGroupAtmosphereLoadCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupSubMissionCompleteCondition; }

#define RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F2890)
#define RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9F28A0)
#define RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9F4C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSubMissionCompleteCondition_TypeDefinitionIndex = 17381;

	class LevelGroupSubMissionCompleteCondition : public ::RPG::GameCore::LevelGroupAtmosphereLoadCondition
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
