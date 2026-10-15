#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionConditionOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupMissionCondition; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }

#define RPG_GAMECORE_LEVELGROUPMISSIONCONDITIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D783D00)
#define RPG_GAMECORE_LEVELGROUPMISSIONCONDITIONSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D783050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMissionConditionSet_TypeDefinitionIndex = 17208;

	class LevelGroupMissionConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupMissionCondition*>* Conditions; // 0x10
		::RPG::GameCore::LevelGroupMissionConditionOperation Operation; // 0x18
		::System::Boolean DelayToLevelReload; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONCONDITIONSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupMissionConditionSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupMissionConditionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONCONDITIONSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
