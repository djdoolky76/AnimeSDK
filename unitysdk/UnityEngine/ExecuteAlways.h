#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXECUTEALWAYS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EAE80)

namespace UnityEngine
{
	class ExecuteAlways : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXECUTEALWAYS_CTOR_OFFSET))(this);
		}

	};
}
