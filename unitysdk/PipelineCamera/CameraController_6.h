#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class CameraController_6; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraController_6_TypeDefinitionIndex = 36167;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class CameraController_6
	{
	public:
		T1 _pipeline1; // 0x0
		T2 _pipeline2; // 0x0
		T3 _pipeline3; // 0x0
		T4 _pipeline4; // 0x0
		::PipelineCamera::CameraContext_2<::PipelineCamera::CameraController_6<T5, T6, T6, T6, T6, T6>*, T5>* _cameraContext; // 0x0
	};
}
