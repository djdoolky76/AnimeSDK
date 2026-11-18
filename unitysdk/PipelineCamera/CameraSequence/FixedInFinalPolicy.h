#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52EED0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FixedInFinalPolicy_TypeDefinitionIndex = 36565;

	class FixedInFinalPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY__CTOR_OFFSET))(this);
		}
	};
}
