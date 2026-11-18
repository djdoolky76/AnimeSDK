#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0xFA91340)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0xFA90F30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0xFA91610)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_JJKACAFNFCE_OFFSET UNITYSDK_OFFSET(0xFA91B60)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_NCOHDPLFCDL_OFFSET UNITYSDK_OFFSET(0xFA90F10)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF__CTOR_OFFSET UNITYSDK_OFFSET(0xFA8F010)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_APOMNOLLNBF_TypeDefinitionIndex = 51951;

	class ScopedOverShoulderCamera_APOMNOLLNBF : public ::System::Object
	{
	public:
		::MoleMole::Cameras::CameraTrackBlending* LOOMPOAGMAP; // 0x10
		::MoleMole::Cameras::ScopedOverShoulderCamera* KLHPEBKNIFB; // 0x18
		::System::Action_2<::System::Single, ::PipelineCamera::WorldBasicCameraData>* MNMDKBDFAFE; // 0x20
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO; // 0x28
		::MoleMole::Cameras::CameraTrackBlending* GEJGGEKDBAG; // 0x30
		::Foundation::Variable_1<::UnityEngine::Vector3> COCICFCHDFP; // 0x38
		::System::Byte _padding0[0x18];
		::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB; // 0x58
		::System::Func_1<::System::Boolean>* OLDCEOGKOAE; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF__CTOR_OFFSET))(this);
		}

		::System::Boolean NCOHDPLFCDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_NCOHDPLFCDL_OFFSET))(this);
		}

		::System::Void EJHICKGMKBO(::PipelineCamera::ICameraDataBlender* ODLOFJPFLJE)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_EJHICKGMKBO_OFFSET))(this, ODLOFJPFLJE);
		}

		::PipelineCamera::ICameraDataBlender* CBCIMCIDJBA(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_CBCIMCIDJBA_OFFSET))(this, PIIPCLCCOIG);
		}

		::PipelineCamera::ICameraDataBlender* HBJKOGCOPJG(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_HBJKOGCOPJG_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void JJKACAFNFCE(::System::Single DIEHHNCKDPI, ::PipelineCamera::WorldBasicCameraData DJLKOFKDHEN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_APOMNOLLNBF_JJKACAFNFCE_OFFSET))(this, DIEHHNCKDPI, DJLKOFKDHEN);
		}
	};
}
