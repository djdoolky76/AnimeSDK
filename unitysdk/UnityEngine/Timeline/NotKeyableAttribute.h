#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_NOTKEYABLEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F38D3A0)

namespace UnityEngine::Timeline
{
	class NotKeyableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTKEYABLEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
