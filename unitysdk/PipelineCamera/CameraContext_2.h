#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Detail/ExternalValueCounter.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::Detail { class PipelineCameraCommandHandler; }
namespace PipelineCamera::Detail { template <typename T1, typename T2> class CameraModuleTracker_2; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraContext_2_TypeDefinitionIndex = 36148;

	template <typename T1, typename T2>
	class CameraContext_2 : public ::System::Object
	{
	public:
		// static const ::System::Int32 EventQueueCapacity = 0x20; // 0x0
		T1 _ownerController; // 0x0
		::PipelineCamera::Detail::ExternalValueCounter _valueManager; // 0x0
		::PipelineCamera::WorldBasicCameraData _lastCameraData; // 0x0
		::PipelineCamera::WorldBasicCameraData _lastReferenceCameraData; // 0x0
		::UnityEngine::Camera* _mCamera; // 0x0
		::System::Single _aspectRatio; // 0x0
		::PipelineCamera::Detail::PipelineCameraCommandHandler* _cameraCommandHandlers; // 0x0
		::PipelineCamera::Detail::CameraModuleTracker_2<T2, T2>* _moduleTracker; // 0x0
		::System::Int32 _referenceRotationPriority; // 0x0
		::System::Double _timestamp; // 0x0
		::System::Single _deltaTime; // 0x0
		::System::Collections::Generic::Queue_1<::System::Action*>* _internalEvents; // 0x0
	};
}
