#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

#define BLJCNKFKFGL_HKIJNEGPIFA_EFKKONJMGLF_OFFSET UNITYSDK_OFFSET(0xF7AD1A0)
#define BLJCNKFKFGL_HKIJNEGPIFA__CTOR_OFFSET UNITYSDK_OFFSET(0xF7ABBF0)

inline static constexpr unsigned int BLJCNKFKFGL_HKIJNEGPIFA_TypeDefinitionIndex = 79701;

class BLJCNKFKFGL_HKIJNEGPIFA : public ::System::Object
{
public:
	::PipelineCamera::WorldBasicCameraData LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_HKIJNEGPIFA__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData EFKKONJMGLF()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_HKIJNEGPIFA_EFKKONJMGLF_OFFSET))(this);
	}
};
