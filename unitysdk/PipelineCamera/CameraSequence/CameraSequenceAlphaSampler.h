#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEALPHASAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D4A70)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceAlphaSampler_TypeDefinitionIndex = 36518;

	class CameraSequenceAlphaSampler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEALPHASAMPLER__CTOR_OFFSET))(this);
		}
	};
}
