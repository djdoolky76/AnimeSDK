#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraController_2; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraController_2_TypeDefinitionIndex = 36171;

	template <typename T1, typename T2>
	class CameraController_2
	{
	public:
		::PipelineCamera::CameraContext_2<::PipelineCamera::CameraController_2<T1, T2>*, T1>* _cameraContext; // 0x0
	};
}
