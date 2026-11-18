#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDEC230)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AlphaGeneratorPolicy_TypeDefinitionIndex = 36575;

	class AlphaGeneratorPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY__CTOR_OFFSET))(this);
		}
	};
}
