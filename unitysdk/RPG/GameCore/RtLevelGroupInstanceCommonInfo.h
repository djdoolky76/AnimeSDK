#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/RPG/GameCore/GroupSaveType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelGroupLoadSide.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class LevelGroupSystemUnlockConditionSet; }
namespace RPG::GameCore { class RtLevelGroupInstanceCommonInfo; }

#define RPG_GAMECORE_RTLEVELGROUPINSTANCECOMMONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA61030)
#define RPG_GAMECORE_RTLEVELGROUPINSTANCECOMMONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA60CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelGroupInstanceCommonInfo_TypeDefinitionIndex = 17346;

	class RtLevelGroupInstanceCommonInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsDelete; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::GroupCategory Category; // 0x14
		::RPG::GameCore::GroupSaveType SaveType; // 0x18
		::System::Boolean IsHoyoGroup; // 0x1C
		::System::Byte _padding1[0x3];
		::RPG::GameCore::LevelGroupLoadSide LoadSide; // 0x20
		::System::Boolean LoadOnInitial; // 0x24
		::System::Byte _padding2[0x3];
		::System::UInt32 GroupRefreshID; // 0x28
		::System::Byte _padding3[0x4];
		::RPG::GameCore::LevelGroupMissionConditionSet* UnloadCondition; // 0x30
		::RPG::GameCore::LevelGroupMissionConditionSet* ForceUnloadCondition; // 0x38
		::RPG::GameCore::LevelGroupSystemUnlockConditionSet* SystemUnlockCondition; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCECOMMONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtLevelGroupInstanceCommonInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtLevelGroupInstanceCommonInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCECOMMONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
