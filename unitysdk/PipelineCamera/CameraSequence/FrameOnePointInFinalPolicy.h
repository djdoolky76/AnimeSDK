#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E844940)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameOnePointInFinalPolicy_TypeDefinitionIndex = 36567;

	class FrameOnePointInFinalPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY__CTOR_OFFSET))(this);
		}
	};
}
