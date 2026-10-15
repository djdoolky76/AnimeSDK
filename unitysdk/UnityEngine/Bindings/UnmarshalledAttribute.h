#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_UNMARSHALLEDATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49D290)

namespace UnityEngine::Bindings
{
	class UnmarshalledAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_UNMARSHALLEDATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
