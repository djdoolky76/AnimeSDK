#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> class CameraController_10; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraController_10_TypeDefinitionIndex = 36163;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
	class CameraController_10
	{
	public:
		T1 _pipeline1; // 0x0
		T2 _pipeline2; // 0x0
		T3 _pipeline3; // 0x0
		T4 _pipeline4; // 0x0
		T5 _pipeline5; // 0x0
		T6 _pipeline6; // 0x0
		T7 _pipeline7; // 0x0
		T8 _pipeline8; // 0x0
		::PipelineCamera::CameraContext_2<::PipelineCamera::CameraController_10<T9, T10, T10, T10, T10, T10, T10, T10, T10, T10>*, T9>* _cameraContext; // 0x0
	};
}
