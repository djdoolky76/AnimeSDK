#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C78C270)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_TypeDefinitionIndex = 36568;

	class FrameOnePointInCorePolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY__CTOR_OFFSET))(this);
		}
	};
}
