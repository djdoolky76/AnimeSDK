#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_GRADIENTUSAGEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EF990)

namespace UnityEngine
{
	class GradientUsageAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Boolean hdr; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTUSAGEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
