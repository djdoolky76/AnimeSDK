#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_FKDGABFFFNC_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0xFA91BA0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_FKDGABFFFNC__CTOR_OFFSET UNITYSDK_OFFSET(0xFA8D320)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_FKDGABFFFNC_TypeDefinitionIndex = 51953;

	class ScopedOverShoulderCamera_FKDGABFFFNC : public ::System::Object
	{
	public:
		::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x10
		::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18
		::MoleMole::Cameras::ScopedOverShoulderCamera* KLHPEBKNIFB; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_FKDGABFFFNC__CTOR_OFFSET))(this);
		}

		::System::Void MHOCBDNKKJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_FKDGABFFFNC_MHOCBDNKKJK_OFFSET))(this);
		}
	};
}
