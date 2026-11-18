#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBGELMBGLKD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_MHJOINFDBCK_GOJBJADHANG_OFFSET UNITYSDK_OFFSET(0x190868A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_MHJOINFDBCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19086890)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_MHJOINFDBCK_TypeDefinitionIndex = 51950;

	class ScopedOverShoulderCamera_MHJOINFDBCK : public ::System::Object
	{
	public:
		::System::Single HKHIMAKFCGD; // 0x10
		::System::Single EGCKEINKEPM; // 0x14
		::System::Single KMOAACMAOKO; // 0x18
		::NBGELMBGLKD MOLDMBLKEHK; // 0x1C
		::UnityEngine::LayerMask FBNGKPGLADH; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_MHJOINFDBCK__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* GOJBJADHANG()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_MHJOINFDBCK_GOJBJADHANG_OFFSET))(this);
		}
	};
}
