#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define UNITYENGINE_TIMELINE_CUSTOMGROUPTRACKDATABASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F389A20)

namespace UnityEngine::Timeline
{
	class CustomGroupTrackDataBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUSTOMGROUPTRACKDATABASE_CTOR_OFFSET))(this);
		}

	};
}
