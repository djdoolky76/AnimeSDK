#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PIPELINECAMERA_CAMERASEQUENCE_EXPORTTOCONTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52EEC0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int ExportToContextAttribute_TypeDefinitionIndex = 36603;

	class ExportToContextAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_EXPORTTOCONTEXTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
