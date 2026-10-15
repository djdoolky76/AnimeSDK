#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationGroupConfig; }
namespace RPG::GameCore { class RotatableRegionPose; }

#define RPG_GAMECORE_ROTATABLEREGIONPOSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA479C0)
#define RPG_GAMECORE_ROTATABLEREGIONPOSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA47540)

namespace RPG::GameCore
{
	class RotatableRegionPose : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 RotationAxis; // 0x10
		::System::Single RotationAngle; // 0x1C
		::Il2CppArray<::System::UInt32>* PosePermanentGroups; // 0x20
		::Il2CppArray<::System::UInt32>* PoseGroups; // 0x28
		::Il2CppArray<::RPG::GameCore::MapRotationGroupConfig*>* PoseGroupConfigs; // 0x30
		::System::Boolean UseCustomInitTransform; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::MVector3 CustomInitPosition; // 0x3C
		::RPG::MVector3 CustomInitRotation; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONPOSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RotatableRegionPose* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RotatableRegionPose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONPOSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
