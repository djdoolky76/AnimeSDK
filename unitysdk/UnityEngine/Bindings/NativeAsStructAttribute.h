#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_NATIVEASSTRUCTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49CD60)

namespace UnityEngine::Bindings
{
	class NativeAsStructAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEASSTRUCTATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
