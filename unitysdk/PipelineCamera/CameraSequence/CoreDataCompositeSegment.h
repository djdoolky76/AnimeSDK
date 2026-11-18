#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F746A00)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCompositeSegment_TypeDefinitionIndex = 36535;

	class CoreDataCompositeSegment
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITESEGMENT__CTOR_OFFSET))(this);
		}
	};
}
