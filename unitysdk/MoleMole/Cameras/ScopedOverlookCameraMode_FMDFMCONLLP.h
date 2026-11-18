#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Cameras { class OverlookCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverlookCameraMode; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_FMDFMCONLLP_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x11E6B000)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_FMDFMCONLLP_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x11E6AF30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_FMDFMCONLLP__CTOR_OFFSET UNITYSDK_OFFSET(0x11E6AF20)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_FMDFMCONLLP_TypeDefinitionIndex = 65482;

	class ScopedOverlookCameraMode_FMDFMCONLLP : public ::System::Object
	{
	public:
		::MoleMole::Cameras::ScopedOverlookCameraMode* KLHPEBKNIFB; // 0x10
		::MoleMole::Cameras::OverlookCameraConfig* EJJNGFCGNAK; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_FMDFMCONLLP__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* HBJKOGCOPJG()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_FMDFMCONLLP_HBJKOGCOPJG_OFFSET))(this);
		}

		::System::Void EJHICKGMKBO(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_FMDFMCONLLP_EJHICKGMKBO_OFFSET))(this, FKMJKPGNCJI);
		}
	};
}
