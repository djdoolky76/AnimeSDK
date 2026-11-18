#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8AD0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FixedInCorePolicy_TypeDefinitionIndex = 36566;

	class FixedInCorePolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY__CTOR_OFFSET))(this);
		}
	};
}
