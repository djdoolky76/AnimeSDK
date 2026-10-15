#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageRegionAffect; }
namespace RPG::GameCore { class StageRegionConfig; }
namespace RPG::GameCore { class StageRegionConnection; }
namespace RPG::GameCore { class StageRegionPerformancePatch; }
namespace RPG::GameCore { class StageRegionState; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEREGIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB13880)
#define RPG_GAMECORE_STAGEREGIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB13490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionConfig_TypeDefinitionIndex = 19194;

	class StageRegionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 IslandID; // 0x14
		::RPG::GameCore::StageRegionType Type; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::HoyoTagContainer* Tag; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RegionBlockVisibilityStatus>* MiddleDistantViewVisualState; // 0x28
		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* VolumeList; // 0x30
		::Il2CppArray<::RPG::GameCore::StageRegionAffect*>* OverrideRegionActiveStateList; // 0x38
		::Il2CppArray<::RPG::GameCore::StageRegionConnection*>* ConnectionList; // 0x40
		::Il2CppArray<::RPG::GameCore::StageRegionState*>* StateList; // 0x48
		::System::Single EntityPerformanceCostRatio; // 0x50
		::System::UInt32 Priority; // 0x54
		::RPG::GameCore::StageRegionPerformancePatch* PerformancePatch; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
