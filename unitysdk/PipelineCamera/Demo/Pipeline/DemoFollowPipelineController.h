#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PipelineCamera { template <typename T> class ICameraController_1; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPipelineConfig; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPlayerController; }
namespace UnityEngine { class Camera; }

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONTROLLER_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x1EC33AF0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC33B00)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineController_TypeDefinitionIndex = 36433;

	class DemoFollowPipelineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* _camera; // 0x18
		::PipelineCamera::ICameraController_1<::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController*>* _cameraController; // 0x20
		::System::Boolean _isCameraNull; // 0x28
		::System::Byte _padding0[0x7];
		::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController* _playerController; // 0x30
		::PipelineCamera::Demo::Pipeline::DemoFollowPipelineConfig* demoConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONTROLLER__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraController_1<::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController*>* get_Controller()
		{
			return ((::PipelineCamera::ICameraController_1<::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONTROLLER_GET_CONTROLLER_OFFSET))(this);
		}
	};
}
