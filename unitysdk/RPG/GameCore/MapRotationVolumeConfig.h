#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationCameraConfig; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }

#define RPG_GAMECORE_MAPROTATIONVOLUMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D830780)
#define RPG_GAMECORE_MAPROTATIONVOLUMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D830310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeConfig_TypeDefinitionIndex = 17023;

	class MapRotationVolumeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 PoseIndex0; // 0x18
		::System::UInt32 PoseIndex1; // 0x1C
		::System::Boolean IsDisposable; // 0x20
		::System::Boolean IsRemovable; // 0x21
		::System::Boolean IsUnableDeployOnInit; // 0x22
		::System::Boolean AlwaysDeploy; // 0x23
		::System::Boolean IsRayCastHitEnable; // 0x24
		::System::Boolean IgnoreAchievement; // 0x25
		::System::Boolean OverrideCameraConfig; // 0x26
		::System::Byte _padding0[0x1];
		::RPG::GameCore::MapRotationCameraConfig* CameraConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
