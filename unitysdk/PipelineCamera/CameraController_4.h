#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera { template <typename T1, typename T2, typename T3, typename T4> class CameraController_4; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraController_4_TypeDefinitionIndex = 36169;

	template <typename T1, typename T2, typename T3, typename T4>
	class CameraController_4
	{
	public:
		T1 _pipeline1; // 0x0
		T2 _pipeline2; // 0x0
		::PipelineCamera::CameraContext_2<::PipelineCamera::CameraController_4<T3, T4, T4, T4>*, T3>* _cameraContext; // 0x0
	};
}
