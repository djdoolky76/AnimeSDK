#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FE340)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceContextType_TypeDefinitionIndex = 36600;

	class CameraSequenceContextType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTTYPE__CTOR_OFFSET))(this);
		}
	};
}
