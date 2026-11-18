#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKEATTENUATIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC32290)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DefaultShakeAttenuationPolicy_TypeDefinitionIndex = 36641;

	class DefaultShakeAttenuationPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKEATTENUATIONPOLICY__CTOR_OFFSET))(this);
		}
	};
}
