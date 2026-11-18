#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GLCDKCDBGJO_MHOCBDNKKJK_OFFSET UNITYSDK_OFFSET(0x1C5AF420)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GLCDKCDBGJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AF410)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_GLCDKCDBGJO_TypeDefinitionIndex = 65485;

	class ScopedOverlookCameraMode_GLCDKCDBGJO : public ::System::Object
	{
	public:
		::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
		::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GLCDKCDBGJO__CTOR_OFFSET))(this);
		}

		::System::Void MHOCBDNKKJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_GLCDKCDBGJO_MHOCBDNKKJK_OFFSET))(this);
		}
	};
}
