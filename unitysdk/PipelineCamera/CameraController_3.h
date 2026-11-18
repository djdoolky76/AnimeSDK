#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera { template <typename T1, typename T2, typename T3> class CameraController_3; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraController_3_TypeDefinitionIndex = 36170;

	template <typename T1, typename T2, typename T3>
	class CameraController_3
	{
	public:
		T1 _pipeline1; // 0x0
		::PipelineCamera::CameraContext_2<::PipelineCamera::CameraController_3<T2, T3, T3>*, T2>* _cameraContext; // 0x0
	};
}
