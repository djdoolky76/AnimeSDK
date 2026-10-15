#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_WRITABLEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49D510)

namespace UnityEngine
{
	class WritableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WRITABLEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
