#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CRPGraphicsSettingsData_ClusterLightingSettings; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC03190)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTSETTINGS_GETLIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC03310)

namespace RPG::CustomRP
{
	class CRPGraphicsSettingsData_LocalLightSettings : public ::System::Object
	{
	public:
		::System::Boolean EnableLODDither; // 0x10
		::System::Boolean EnableLightCombine; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single LightRangeCut; // 0x14
		::System::Int32 MaxLightCountForEngine; // 0x18
		::System::Int32 MaxLightCountForScript; // 0x1C
		::System::Single TransFadeDuration; // 0x20
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* lod; // 0x28
		::RPG::CustomRP::CustomLightQualityFilter lightLevel; // 0x30
		::RPG::CustomRP::CustomLightQualityFilter lightLevelV2; // 0x34
		::System::Boolean UseAO; // 0x38
		::System::Boolean EnableClusterLighting; // 0x39
		::System::Byte _padding2[0x6];
		::RPG::CustomRP::CRPGraphicsSettingsData_ClusterLightingSettings* clusterSettings; // 0x40
		::System::Boolean EnableDepthBounds; // 0x48
		::System::Byte _padding3[0x3];
		::System::Single LocalLightEffectDist; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTSETTINGS_CTOR_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetLightLevel(::System::Int32 a1)
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTSETTINGS_GETLIGHTLEVEL_OFFSET))(this, a1);
		}

	};
}
