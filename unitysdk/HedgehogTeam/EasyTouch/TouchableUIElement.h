#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define HEDGEHOGTEAM_EASYTOUCH_TOUCHABLEUIELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x16757940)

namespace HedgehogTeam::EasyTouch
{
	class TouchableUIElement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TOUCHABLEUIELEMENT_CTOR_OFFSET))(this);
		}

	};
}
