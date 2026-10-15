#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLAJJDPBHLL.h"
#include "unitysdk/KLEFGGIHGMI_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/CompatKey.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"

#define FNHIALEAAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x2E77E80)
#define FNHIALEAAPG_GET_ACTIVESTATE_OFFSET UNITYSDK_OFFSET(0xFE70)
#define FNHIALEAAPG_GET_AGGREGATEDSTATEV2_OFFSET UNITYSDK_OFFSET(0x2580)
#define FNHIALEAAPG_GET_COMPATKEY_OFFSET UNITYSDK_OFFSET(0xEE4D0)
#define FNHIALEAAPG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FNHIALEAAPG_GET_USESSOURCEPROFILE_OFFSET UNITYSDK_OFFSET(0x26270)
#define FNHIALEAAPG_GET_VISUALSTATE_OFFSET UNITYSDK_OFFSET(0xE620)

inline static constexpr unsigned int FNHIALEAAPG_TypeDefinitionIndex = 62147;

	struct alignas(4) FNHIALEAAPG
	{
		::RPG::GameCore::StageRegionVisualState _VisualState_k__BackingField; // 0x10
		::RPG::GameCore::StageRegionActiveState _ActiveState_k__BackingField; // 0x14
		::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority _Priority_k__BackingField; // 0x18
		::GLAJJDPBHLL _AggregatedStateV2_k__BackingField; // 0x1C
		::RPG::Client::CompatKey _CompatKey_k__BackingField; // 0x24
		::System::Boolean _UsesSourceProfile_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::GameCore::StageRegionVisualState a1, ::RPG::GameCore::StageRegionActiveState a2, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a3, ::GLAJJDPBHLL a4, ::RPG::Client::CompatKey a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::StageRegionActiveState, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority, ::GLAJJDPBHLL, ::RPG::Client::CompatKey, ::System::Boolean))((::PBYTE)hIl2Cpp + FNHIALEAAPG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::GameCore::StageRegionVisualState get_VisualState()
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHIALEAAPG_GET_VISUALSTATE_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionActiveState get_ActiveState()
		{
			return ((::RPG::GameCore::StageRegionActiveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHIALEAAPG_GET_ACTIVESTATE_OFFSET))(this);
		}

		::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority get_Priority()
		{
			return ((::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHIALEAAPG_GET_PRIORITY_OFFSET))(this);
		}

		::GLAJJDPBHLL get_AggregatedStateV2()
		{
			return ((::GLAJJDPBHLL(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHIALEAAPG_GET_AGGREGATEDSTATEV2_OFFSET))(this);
		}

		::RPG::Client::CompatKey get_CompatKey()
		{
			return ((::RPG::Client::CompatKey(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHIALEAAPG_GET_COMPATKEY_OFFSET))(this);
		}

		::System::Boolean get_UsesSourceProfile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHIALEAAPG_GET_USESSOURCEPROFILE_OFFSET))(this);
		}

	};
