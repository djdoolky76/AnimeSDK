#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXTENSIONOFNATIVECLASSATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EB4D0)

namespace UnityEngine
{
	class ExtensionOfNativeClassAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXTENSIONOFNATIVECLASSATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
