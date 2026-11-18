#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBGELMBGLKD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CIOPPKGNMDC_CGMHNMPFKKB_OFFSET UNITYSDK_OFFSET(0x12758D30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CIOPPKGNMDC_PGHEOCLFPMC_OFFSET UNITYSDK_OFFSET(0x12758DF0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CIOPPKGNMDC__CTOR_OFFSET UNITYSDK_OFFSET(0x12758D20)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_CIOPPKGNMDC_TypeDefinitionIndex = 51948;

	class ScopedOverShoulderCamera_CIOPPKGNMDC : public ::System::Object
	{
	public:
		::MoleMole::Cameras::ScopedOverShoulderCamera* KLHPEBKNIFB; // 0x10
		::NBGELMBGLKD GEELJKAAGLD; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CIOPPKGNMDC__CTOR_OFFSET))(this);
		}

		::System::Void CGMHNMPFKKB(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CIOPPKGNMDC_CGMHNMPFKKB_OFFSET))(this, FKMJKPGNCJI);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* PGHEOCLFPMC()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CIOPPKGNMDC_PGHEOCLFPMC_OFFSET))(this);
		}
	};
}
