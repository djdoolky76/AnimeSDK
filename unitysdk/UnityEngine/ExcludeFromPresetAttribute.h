#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXCLUDEFROMPRESETATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x2069B9E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ExcludeFromPresetAttribute_TypeDefinitionIndex = 4313;

	class ExcludeFromPresetAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXCLUDEFROMPRESETATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
