#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_RENDERING_VOLUMECOMPONENTDEPRECATED_CTOR_OFFSET UNITYSDK_OFFSET(0x20590820)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponentDeprecated_TypeDefinitionIndex = 36544;

	class VolumeComponentDeprecated : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENTDEPRECATED_CTOR_OFFSET))(this);
		}

	};
}
