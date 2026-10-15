#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_NOTNULLATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49D230)

namespace UnityEngine::Bindings
{
	class NotNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NOTNULLATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
