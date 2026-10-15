#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_PATHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D09E0)

namespace RPGTools::Timeline
{
	class CharacterStoryMoveData_PathPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_PATHPOINT_CTOR_OFFSET))(this);
		}

	};
}
