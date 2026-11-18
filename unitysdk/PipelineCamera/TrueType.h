#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_TRUETYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x48C0E0)

namespace PipelineCamera
{
	inline static constexpr unsigned int TrueType_TypeDefinitionIndex = 36361;

	struct alignas(4) TrueType
	{
		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TRUETYPE_GET_VALUE_OFFSET))(this);
		}
	};
}
