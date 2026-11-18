#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }

#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x963320)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_COLLECT_OFFSET UNITYSDK_OFFSET(0x963410)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x963370)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x963460)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9634E0)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_PREPARE_OFFSET UNITYSDK_OFFSET(0x9633C0)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_TOUCH_OFFSET UNITYSDK_OFFSET(0x963530)

namespace PipelineCamera::SubModule::Detail
{
	inline static constexpr unsigned int DefaultVolumeCollisionResolver_TypeDefinitionIndex = 36694;

	struct alignas(4) DefaultVolumeCollisionResolver
	{
		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Collect(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_COLLECT_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_SubModule_ICameraCollisionResolver_Evaluate(::PipelineCamera::WorldBasicCameraData& inputData, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_EVALUATE_OFFSET))(this, inputData, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTVOLUMECOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_TOUCH_OFFSET))(this, context);
		}
	};
}
