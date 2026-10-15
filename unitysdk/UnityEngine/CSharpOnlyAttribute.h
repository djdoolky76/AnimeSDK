#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_CSHARPONLYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D5830)

namespace UnityEngine
{
	class CSharpOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CSHARPONLYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
