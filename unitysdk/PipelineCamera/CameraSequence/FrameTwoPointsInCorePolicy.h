#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMETWOPOINTSINCOREPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F501130)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameTwoPointsInCorePolicy_TypeDefinitionIndex = 36570;

	class FrameTwoPointsInCorePolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMETWOPOINTSINCOREPOLICY__CTOR_OFFSET))(this);
		}
	};
}
