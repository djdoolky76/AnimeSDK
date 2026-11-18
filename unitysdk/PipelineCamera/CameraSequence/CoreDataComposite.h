#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC32230)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataComposite_TypeDefinitionIndex = 36543;

	class CoreDataComposite
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITE__CTOR_OFFSET))(this);
		}
	};
}
