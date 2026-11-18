#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DF6B0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataSequence_TypeDefinitionIndex = 36534;

	class CoreDataSequence
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATASEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
