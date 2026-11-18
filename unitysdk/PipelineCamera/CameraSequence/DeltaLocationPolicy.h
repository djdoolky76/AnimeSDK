#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCDE10)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DeltaLocationPolicy_TypeDefinitionIndex = 36573;

	class DeltaLocationPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY__CTOR_OFFSET))(this);
		}
	};
}
