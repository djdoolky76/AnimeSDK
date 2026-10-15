#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_RENDERING_RELOADGROUPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CA2D0)

namespace UnityEngine::Rendering
{
	class ReloadGroupAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADGROUPATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
