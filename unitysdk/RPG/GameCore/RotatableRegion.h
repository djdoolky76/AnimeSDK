#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationAirlockConfig; }
namespace RPG::GameCore { class MapRotationChargerConfig; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace RPG::GameCore { class RotatableRegion; }
namespace RPG::GameCore { class RotatableRegionPose; }
namespace System { class String; }

#define RPG_GAMECORE_ROTATABLEREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA474D0)
#define RPG_GAMECORE_ROTATABLEREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA46F00)

namespace RPG::GameCore
{
	class RotatableRegion : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnchorPrefabPath; // 0x10
		::Il2CppArray<::System::String*>* RegionBlocks; // 0x18
		::Il2CppArray<::RPG::GameCore::MapRotationAirlockConfig*>* Airlocks; // 0x20
		::RPG::MVector3 Map3DAnchorPosition; // 0x28
		::RPG::MVector3 Map3DAnchorRotation; // 0x34
		::System::String* Map3DPrefabPath; // 0x40
		::System::UInt32 MapSectionID; // 0x48
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::RotatableRegionPose*>* Poses; // 0x50
		::Il2CppArray<::RPG::GameCore::MapRotationVolumeConfig*>* Volumes; // 0x58
		::Il2CppArray<::RPG::GameCore::MapRotationChargerConfig*>* Chargers; // 0x60
		::System::String* OverrideStepOnPoseStateA; // 0x68
		::System::String* OverrideStepOnPoseStateB; // 0x70
		::System::UInt32 StageRegionID; // 0x78
		::System::Boolean BindStageRegion; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RotatableRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RotatableRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
