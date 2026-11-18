#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2EC90)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AspectRatioPolicy_TypeDefinitionIndex = 36572;

	class AspectRatioPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY__CTOR_OFFSET))(this);
		}
	};
}
